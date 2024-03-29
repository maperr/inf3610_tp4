// ***********************************************************************
//
// Filename : controller.cpp
//
// Author : SpaceStudio generation engine
//
// Creation date : Wed Oct 17 09:38:19 EDT 2012
//
//
// ***********************************************************************
#include "controller.h"
#include "PlatformDefinitions.h"
#include "ApplicationDefinitions.h"
#include "SpaceDisplay.h"
#include "matrix_def.h"
#include "matrix.h"

#define INPUT_STREAM_LENGTH 20

//////////////////////////////////////////////////////////////////////////////
///
///	Constructor
///
//////////////////////////////////////////////////////////////////////////////
controller::controller(sc_module_name zName, double dClockPeriod, sc_time_unit ClockPeriodUnit, unsigned char ucID, unsigned char ucPriority, bool bVerbose)
: SpaceBaseModule(zName, dClockPeriod, ClockPeriodUnit, ucID, ucPriority, bVerbose)
{
	SC_THREAD(thread);
}

//////////////////////////////////////////////////////////////////////////////
///
///	Controller's algorithm
///
//////////////////////////////////////////////////////////////////////////////
void controller::thread(void)
{
	long operand1;
	long operand2;
	long result;
	Operation operation;

	while(1) {
		readData(&operand1, &operand2, &operation);
		result = delegateOperation(operation, operand1, operand2);
		sendResult(result);
	}
}

//////////////////////////////////////////////////////////////////////////////
///
///	Send result to output
///
//////////////////////////////////////////////////////////////////////////////
void controller::sendResult(long data)
{
	if (GetVerbose())
		SpacePrint("Result:%d\n", data);

	int i;
	unsigned long power;
	unsigned int digit;

	// Negative number
	if (data < 0)
	{
		sendCharacter('-');
		data *= -1;
	}

	for(i=getOrder(data);i>=0;i--)
	{
		power = pow(10, i);
		digit = data/power;
		data -= digit*power;
		sendCharacter(itoa(digit));
	}

	sendCharacter(0xD);
}

//////////////////////////////////////////////////////////////////////////////
///
///	Send a character
///
//////////////////////////////////////////////////////////////////////////////
void controller::sendCharacter(unsigned char character)
{
	unsigned long data = (unsigned long)character;
	ModuleWrite(OUTPUT_WRITER_ID, SPACE_BLOCKING, &data);
}

//////////////////////////////////////////////////////////////////////////////
///
///	Read data from input
///
//////////////////////////////////////////////////////////////////////////////
unsigned long controller::readInput()
{
	unsigned long data;

	ModuleRead(INPUT_READER_ID, SPACE_BLOCKING, &data);

	return data;
}

//////////////////////////////////////////////////////////////////////////////
///
///	Read data
///
//////////////////////////////////////////////////////////////////////////////
void controller::readData(long* operand1, long* operand2, Operation* operation)
{
	unsigned char raw[INPUT_STREAM_LENGTH];

	readInputStream(raw);
	*operand1 = getFirstOperand(raw);
	*operand2 = getSecondOperand(raw);
	*operation = getOperation(raw);
}

//////////////////////////////////////////////////////////////////////////////
///
///	Get the first operand
///
//////////////////////////////////////////////////////////////////////////////
long controller::getFirstOperand(unsigned char* ptr)
{
	unsigned char length = getOperationPosition(ptr);
	unsigned char* trimPtr = trimSpaces(ptr, &length);
	long number = convertCharacterToNumber(trimPtr, length);

	if (GetVerbose())
		SpacePrint("First operand:%d\n", number);

	return number;
}

//////////////////////////////////////////////////////////////////////////////
///
///	Get the second operand
///
//////////////////////////////////////////////////////////////////////////////
long controller::getSecondOperand(unsigned char* ptr)
{
	unsigned char length = getLFPosition(ptr) - getOperationPosition(ptr) - 1;
	unsigned char* trimPtr = trimSpaces(ptr + getOperationPosition(ptr) + 1, &length);
	long number = convertCharacterToNumber(trimPtr, length);

	if (GetVerbose())
		SpacePrint("Second operand:%d\n", number);

	return number;
}

//////////////////////////////////////////////////////////////////////////////
///
///	Convert an array of character into a number
///
//////////////////////////////////////////////////////////////////////////////
long controller::convertCharacterToNumber(unsigned char* ptr, unsigned char length)
{
	unsigned char i;
	unsigned long number = 0;
	bool isNegativeNumber = false;

	 for(i=0;i<length;i++)
	 {
		 if (isNegative(ptr[i]))
		 {
			 isNegativeNumber = true;
			 continue;
		 }

		number += atoi(ptr[i]) * pow(10, length-i-1);
	 }

	 return isNegativeNumber ? number * -1 : number;
}

//////////////////////////////////////////////////////////////////////////////
///
///	Determine if the character is a minus sign
///
//////////////////////////////////////////////////////////////////////////////
bool controller::isNegative(unsigned char character)
{
	if (character == '-')
		return true;
	return false;
}

//////////////////////////////////////////////////////////////////////////////
///
///	Determine if the character is a digit
///
//////////////////////////////////////////////////////////////////////////////
bool controller::isDigit(unsigned char character)
{
	if (('0' <= character) && (character <= '9'))
		return true;
	return false;
}

//////////////////////////////////////////////////////////////////////////////
///
///	Is the character a space
///
//////////////////////////////////////////////////////////////////////////////
bool controller::isSpace(char character)
{
	if (character == ' ')
		return true;
	return false;
}

//////////////////////////////////////////////////////////////////////////////
///
///	Get the operation position in the array
///
//////////////////////////////////////////////////////////////////////////////
bool controller::isOperationCharacter(unsigned char character)
{
	if ((character == '+') || (character == '-') || (character == '/') || (character == 'x') || (character == 'X') || (character == '*') || (character == 'z'))
		return true;
	return false;
}

//////////////////////////////////////////////////////////////////////////////
///
///	Raise to power
///
//////////////////////////////////////////////////////////////////////////////
unsigned long controller::pow(int base, int exponent)
{
	unsigned long result = 1;
	int i;
	for(i=0;i<exponent;i++)
		result *= base;
	return result;
}

//////////////////////////////////////////////////////////////////////////////
///
///	Get the operation position in the array
///
//////////////////////////////////////////////////////////////////////////////
int controller::getOperationPosition(unsigned char* ptr)
{
	bool isFirstCharacter = true;
	int i=0;
	for(i=0;i<INPUT_STREAM_LENGTH;i++)
	{
		if (!isFirstCharacter && isOperationCharacter(ptr[i]))
			return i;

		if (isFirstCharacter && isDigit(ptr[i]))
			isFirstCharacter = false;
	}

	return -1;
}

//////////////////////////////////////////////////////////////////////////////
///
///	Read the input stream
///
//////////////////////////////////////////////////////////////////////////////
void controller::readInputStream(unsigned char* ptr)
{
	int position;
	sanitize(ptr, &position);
	bool isOverflow = false;

	// Validate input stream
    while(!isValidCommand(ptr) || isDividedByZeroDetected(ptr))
    {
    	// Prevent to have a string with no operation or with invalid operands
    	if (isLFDetected(ptr) && (!isOperationDetected(ptr) || !isOperand1Detected(ptr) || !isOperand2Detected(ptr)))
    	{
    		sanitize(ptr, &position);
    		displayMessage("Invalid input string\n");
    		isOverflow = false;
    	}

    	if (isDividedByZeroDetected(ptr)) {
    		sanitize(ptr, &position);
    		displayMessage("Division by zero detected\n");
    		isOverflow = false;
    	}

		ptr[position++] = (unsigned char)readInput();

		// Loop in array
		if (position == INPUT_STREAM_LENGTH)
		{
			sanitize(ptr, &position);
			if (!isOverflow)
				displayMessage("String too long, try again\n");
			isOverflow = true;
		}
    }
}

//////////////////////////////////////////////////////////////////////////////
///
///	Determine if the buffer contains a valid command
///
//////////////////////////////////////////////////////////////////////////////
bool controller::isValidCommand(unsigned char* ptr)
{
	return isLFDetected(ptr) && isOperationDetected(ptr) && isOperand1Detected(ptr) && isOperand2Detected(ptr);
}

//////////////////////////////////////////////////////////////////////////////
///
///	Determine if the buffer contains a division by zero
///
//////////////////////////////////////////////////////////////////////////////
bool controller::isDividedByZeroDetected(unsigned char* ptr)
{
	return isValidCommand(ptr) && getSecondOperand(ptr) == 0 && getOperation(ptr) == DIVIDE;
}

//////////////////////////////////////////////////////////////////////////////
///
///	Sanitize controller
///
//////////////////////////////////////////////////////////////////////////////
void controller::sanitize(unsigned char* ptr, int* position)
{
	*position = 0;
	init(ptr);
}

//////////////////////////////////////////////////////////////////////////////
///
///	Detect an operation
///
//////////////////////////////////////////////////////////////////////////////
bool controller::isOperationDetected(unsigned char* ptr)
{
	return getOperationPosition(ptr) != -1;
}

//////////////////////////////////////////////////////////////////////////////
///
///	Detect the first operand
///
//////////////////////////////////////////////////////////////////////////////
bool controller::isOperand1Detected(unsigned char* ptr)
{
	unsigned char length = getOperationPosition(ptr);
	unsigned char* trimPtr = trimSpaces(ptr, &length);
	return isNumber(trimPtr, length);
}

//////////////////////////////////////////////////////////////////////////////
///
///	Detect the second operand
///
//////////////////////////////////////////////////////////////////////////////
bool controller::isOperand2Detected(unsigned char* ptr)
{
	unsigned char length = getLFPosition(ptr) - getOperationPosition(ptr) - 1;
	unsigned char* trimPtr = trimSpaces(ptr + getOperationPosition(ptr) + 1, &length);
	return isNumber(trimPtr, length);
}

//////////////////////////////////////////////////////////////////////////////
///
///	Make sure it is a number
///
//////////////////////////////////////////////////////////////////////////////
bool controller::isNumber(unsigned char* ptr, unsigned char length)
{
	bool isFirstCharacter = true;
	int i;

	for(i=0;i<length;i++)
	{
		if (isSpace(ptr[i]))
			return false;

		if (isFirstCharacter && !isDigit(ptr[i]) && !isNegative(ptr[i]))
			return false;

		if (!isFirstCharacter && !isDigit(ptr[i]))
			return false;

		isFirstCharacter = false;
	}

	return true;
}

//////////////////////////////////////////////////////////////////////////////
///
///	Detect a line feed
///
//////////////////////////////////////////////////////////////////////////////
bool controller::isLFDetected(unsigned char* ptr)
{
	return getLFPosition(ptr) != -1;
}

//////////////////////////////////////////////////////////////////////////////
///
///	Detect a line feed
///
//////////////////////////////////////////////////////////////////////////////
int controller::getLFPosition(unsigned char* ptr)
{
	int i;
	for(i=0;i<INPUT_STREAM_LENGTH;i++)
		if (isLF(ptr[i]))
			return i;
	return -1;
}

//////////////////////////////////////////////////////////////////////////////
///
///	Determine if the character is a line feed
///
//////////////////////////////////////////////////////////////////////////////
bool controller::isLF(unsigned char character)
{
	return character == 0xD || character == 0xA;
}

//////////////////////////////////////////////////////////////////////////////
///
///	Trim trailing spaces
///
//////////////////////////////////////////////////////////////////////////////
unsigned char* controller::trimSpaces(unsigned char* ptr, unsigned char* length)
{
	int i;
	int count = 0;

	// Trim trailing spaces
	for(i=0;i<*length;i++)
		if (isSpace(ptr[i]))
			continue;
		else
			break;

	unsigned char* tmpPtr = ptr + i;
	*length -= i;

	// Trim leading spaces
	for(i=*length-1;i>=0;i--)
	{
		if (isSpace(tmpPtr[i]))
			count++;
		else
			break;
	}

	*length -= count;

	return tmpPtr;
}

//////////////////////////////////////////////////////////////////////////////
///
///	Get the operation
///
//////////////////////////////////////////////////////////////////////////////
Operation controller::getOperation(unsigned char* ptr)
{
	unsigned char operation = ptr[getOperationPosition(ptr)];

	if (operation == '+')
	{
		if (GetVerbose())
			SpacePrint("Addition detected!\n");

		return ADD;
	}

	if (operation == '-')
	{
		if (GetVerbose())
			SpacePrint("Subtraction detected!\n");

		return SUBTRACTION;
	}

	if ((operation == '*') || (operation == 'x') || (operation == 'X'))
	{
		if (GetVerbose())
			SpacePrint("Multiplication detected!\n");

		return MULTIPLY;
	}

	if (operation == '/')
	{
		if (GetVerbose())
			SpacePrint("Division detected!\n");

		return DIVIDE;
	}

	if (operation == 'z')
	{
		if (GetVerbose())
		{
			SpacePrint("Matrix multiplication detected!\n");

		}
		return MULTIPLY_MAT;
	}
}

//////////////////////////////////////////////////////////////////////////////
///
///	Delegate the operation
///
//////////////////////////////////////////////////////////////////////////////
long controller::delegateOperation(Operation operation, long operand1, long operand2)
{
	long result;
    switch (operation)
    {
        case ADD:
        {
        	sendAdditionOperand(operand1);
        	sendAdditionOperand(operand2);
        	result = readAdditionResult();
			#ifndef SPACE_GENX
				SpacePrint("%d + %d = %d\n", operand1, operand2, result);
			#endif
        	break;
        }
        case SUBTRACTION:
        {
        	sendSubtractionOperand(operand1);
        	sendSubtractionOperand(operand2);
        	result = readSubtractionResult();
			#ifndef SPACE_GENX
				SpacePrint("%d - %d = %d\n", operand1, operand2, result);
			#endif
        	break;
        }
        case MULTIPLY:
        {
        	sendMultiplicationOperand(operand1);
        	sendMultiplicationOperand(operand2);
        	result = readMultiplicationResult();
			#ifndef SPACE_GENX
				SpacePrint("%d * %d = %d\n", operand1, operand2, result);
			#endif
        	break;
        }
        case DIVIDE:
        {
        	sendDivisionOperand(operand1);
        	sendDivisionOperand(operand2);
        	result = readDivisionResult();
			#ifndef SPACE_GENX
				SpacePrint("%d / %d = %d\n", operand1, operand2, result);
			#endif
        	break;
        }
        case MULTIPLY_MAT:
        {
        	SpacePrint("Doing shit0...");
        	sendMultiplicationMatOperand(operand1);
			sendMultiplicationMatOperand(operand2);
			unsigned int *result = new unsigned int[MATRIX_ROWS * MATRIX_COLUMNS];
			readMultiplicationMatResult(result);
			sc_stop();
			break;
        }

    }

    return result;
}

//////////////////////////////////////////////////////////////////////////////
///
///	Send the addition's operand
///
//////////////////////////////////////////////////////////////////////////////
void controller::sendAdditionOperand(long data)
{
	ModuleWrite(ADDER_ID, SPACE_BLOCKING, &data);
}

//////////////////////////////////////////////////////////////////////////////
///
///	Send the substraction's operand
///
//////////////////////////////////////////////////////////////////////////////
void controller::sendSubtractionOperand(long data)
{
	ModuleWrite(SUBTRACTOR_ID, SPACE_BLOCKING, &data);
}

//////////////////////////////////////////////////////////////////////////////
///
///	Send the multiplication's operand
///
//////////////////////////////////////////////////////////////////////////////
void controller::sendMultiplicationOperand(long data)
{
	ModuleWrite(MULTIPLIER_ID, SPACE_BLOCKING, &data);
}

//////////////////////////////////////////////////////////////////////////////
///
///	Send the division's operand
///
//////////////////////////////////////////////////////////////////////////////
void controller::sendDivisionOperand(long data)
{
	ModuleWrite(DIVIDER_ID, SPACE_BLOCKING, &data);
}

//////////////////////////////////////////////////////////////////////////////
///
///	Send the matrix multiplication operand
///
//////////////////////////////////////////////////////////////////////////////
void controller::sendMultiplicationMatOperand(unsigned long data)
{
	SpacePrint("Doing shit1...");
	int status = Memory2Stream(0x44000000,MATRIXMULTIPLIER_ID, SPACE_BLOCKING, MATRIX_ROWS * MATRIX_COLUMNS * 4);
	SpacePrint("Doing shit2...");
}

//////////////////////////////////////////////////////////////////////////////
///
///	Read the addition's result
///
//////////////////////////////////////////////////////////////////////////////
long controller::readAdditionResult()
{
	long data;

	ModuleRead(ADDER_ID, SPACE_BLOCKING, &data);

    return data;
}

//////////////////////////////////////////////////////////////////////////////
///
///	Read the substraction's result
///
//////////////////////////////////////////////////////////////////////////////
long controller::readSubtractionResult()
{
	long data;

	ModuleRead(SUBTRACTOR_ID, SPACE_BLOCKING, &data);

    return data;
}

//////////////////////////////////////////////////////////////////////////////
///
///	Read the multiplication's result
///
//////////////////////////////////////////////////////////////////////////////
long controller::readMultiplicationResult()
{
	long data;

	ModuleRead(MULTIPLIER_ID, SPACE_BLOCKING, &data);

    return data;
}

//////////////////////////////////////////////////////////////////////////////
///
///	Read the division's result
///
//////////////////////////////////////////////////////////////////////////////
long controller::readDivisionResult()
{
	long data;

	ModuleRead(DIVIDER_ID, SPACE_BLOCKING, &data);

    return data;
}

//////////////////////////////////////////////////////////////////////////////
///
///	Read the matrix multiplication's result
///
//////////////////////////////////////////////////////////////////////////////
void controller::readMultiplicationMatResult(unsigned int *resultBuffer)
{
	int status = Stream2Memory(MATRIXMULTIPLIER_ID, 0x44000000, SPACE_BLOCKING, MATRIX_ROWS * MATRIX_COLUMNS * 4);
}

//////////////////////////////////////////////////////////////////////////////
///
///	Initialize an array
///
//////////////////////////////////////////////////////////////////////////////
void controller::init(unsigned char* ptr)
{
	int i=0;
	for(i=0;i<INPUT_STREAM_LENGTH;i++)
		ptr[i] = 0;
}

//////////////////////////////////////////////////////////////////////////////
///
///	Convert a digit character into a digit
///
//////////////////////////////////////////////////////////////////////////////
int controller::atoi(unsigned char c)
{
	return c - 0x30;
}

//////////////////////////////////////////////////////////////////////////////
///
///	Convert a digit to a digit character
///
//////////////////////////////////////////////////////////////////////////////
unsigned char controller::itoa(unsigned int x)
{
	return x + 0x30;
}

//////////////////////////////////////////////////////////////////////////////
///
///	Get the order of magnitude of a integer
///
//////////////////////////////////////////////////////////////////////////////
int controller::getOrder(unsigned long data)
{
	if (data == 0)
		return 0;

	int order = 0;

	while (data >= pow(10, order))
	{
		order++;
	}

	return --order;
}

//////////////////////////////////////////////////////////////////////////////
///
///	Display message
///
//////////////////////////////////////////////////////////////////////////////
void controller::displayMessage(char* message)
{
	int i=0;
	do
	{
		sendCharacter(message[i]);
	} while(!isLF(message[i++]));

	sendCharacter(0xD);
}
