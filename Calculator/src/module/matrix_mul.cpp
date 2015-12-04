///////////////////////////////////////////////////////////////////////////////
//
// Filename : matrix_mul.cpp
//
// Creation date : Fri Nov 06 11:35:18 EST 2015
//
///////////////////////////////////////////////////////////////////////////////
#include "matrix_mul.h"

#include "PlatformDefinitions.h"
#include "ApplicationDefinitions.h"
#include "SpaceDisplay.h"
#include "SpaceTypes.h"
#include "matrix_def.h"
#include "matrix.h"

matrix_mul::matrix_mul(sc_core::sc_module_name name, double period,
		sc_core::sc_time_unit unit, unsigned char id, unsigned char priority,
		bool verbose) :
		SpaceBaseModule(name, period, unit, id, priority, verbose) {
	SC_THREAD(thread);

	set_stack_size(0x16000 + MATRIX_COLUMNS * MATRIX_ROWS * 4 * 3);

	m_result = new unsigned int[MATRIX_COLUMNS * MATRIX_ROWS];
	m_operand1 = new unsigned int[MATRIX_COLUMNS * MATRIX_ROWS];
	m_operand2 = new unsigned int[MATRIX_COLUMNS * MATRIX_ROWS];
}

void matrix_mul::thread(void) {
	while (1) {
		readOperand();
		multiplyMat();
		sendResult();
	}
}

//////////////////////////////////////////////////////////////////////////////
///
///	Read an operand
///
//////////////////////////////////////////////////////////////////////////////
//comment ++++
void matrix_mul::readOperand() {
	ModuleRead(CONTROLLER_ID, SPACE_BLOCKING, m_operand1, MATRIX_ROWS * MATRIX_COLUMNS);
	ModuleRead(CONTROLLER_ID, SPACE_BLOCKING, m_operand2, MATRIX_ROWS * MATRIX_COLUMNS);
}

//////////////////////////////////////////////////////////////////////////////
///
///	Send the result
///
//////////////////////////////////////////////////////////////////////////////
void matrix_mul::sendResult() {
	SpacePrint("%d z %d = %d and %d \n", m_operand1[0], m_operand2[0],m_result[0], m_result[MATRIX_ROWS * MATRIX_COLUMNS - 1]);
	ModuleWrite(CONTROLLER_ID, SPACE_BLOCKING, m_result, MATRIX_ROWS * MATRIX_COLUMNS);
}

void matrix_mul::multiplyMat() {
	unsigned int i, j, k, sum;

	for (i = 0; i < MATRIX_ROWS; i++)
	{
		for (j = 0; j < MATRIX_COLUMNS; j++)
		{
			sum = 0;
			for (k = 0; k < MATRIX_ROWS; k++)
			{
				sum += m_operand1[i * MATRIX_ROWS + k] * m_operand2[k * MATRIX_COLUMNS + j];
			}
			m_result[i * MATRIX_ROWS + j] = sum;
		}
	}
}
