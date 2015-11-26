////////////////////////////////////////////////////////////////////////////////
//
// Filename : controller.h
//
// Author : SpaceStudio generation engine
//
// Warning: This file content will be overwritten by the next generation process.
//
////////////////////////////////////////////////////////////////////////////////
#include "SpaceDataTypes.h"
#include "TorExternals.h"
#include "sys/mman.h"
#include "linux/ioctl.h"
#include "sys/ioctl.h"
#include "fcntl.h"
#include "stdio.h"
#include "unistd.h"
#include "errno.h"
#include "string.h"

template <typename T> inline eSpaceStatus ModuleWrite_1TO5_90(unsigned char ucDestinationID, unsigned long ulTimeout, T* ptData32, unsigned long ucNbElements = 1)
{
	int fd;
	unsigned long ulDataLength8=ucNbElements*sizeof(T);

	fd = open("/dev/fifo0x41009010", O_WRONLY);
	if(fd < 0)
		printf("Error while opening fifo0x41009010, errno = %s\n", strerror(errno));
	unsigned char* pcData8 = (unsigned char*)ptData32;
	ssize_t nb_transferred;
	eSpaceStatus status = SPACE_OK;
	do {
		nb_transferred = write(fd, (void*)pcData8, ulDataLength8);
		if(nb_transferred == -1) {
			if (errno == EINTR) {
				continue;
			} else if (errno == EAGAIN) {
				status = SPACE_EMPTY;
				break;
			} else {
				status = SPACE_ERROR;
				break;
			}
		}
		ulDataLength8 -= nb_transferred;
		pcData8 += nb_transferred;
	} while(ulDataLength8 != 0 && nb_transferred != 0);
	close(fd);
	return status;
}

template <typename T> inline eSpaceStatus ModuleRead_1TO3_102(unsigned char ucDestinationID, unsigned long ulTimeout, T* ptData32, unsigned long ucNbElements = 1)
{
	int fd;
	unsigned long ulDataLength8=ucNbElements*sizeof(T);

	fd = open("/dev/fifo0x41004010", O_RDONLY);
	if(fd < 0)
		printf("Error while opening fifo0x41004010, errno = %s\n", strerror(errno));
	unsigned char* pcData8 = (unsigned char*)ptData32;
	ssize_t nb_transferred;
	eSpaceStatus status = SPACE_OK;
	do {
		nb_transferred = read(fd, (void*)pcData8, ulDataLength8);
		if(nb_transferred == -1) {
			if (errno == EINTR) {
				continue;
			} else if (errno == EAGAIN) {
				status = SPACE_EMPTY;
				break;
			} else {
				status = SPACE_ERROR;
				break;
			}
		}
		ulDataLength8 -= nb_transferred;
		pcData8 += nb_transferred;
	} while(ulDataLength8 != 0 && nb_transferred != 0);
	close(fd);
	return status;
}

template <typename T> inline eSpaceStatus ModuleWrite_1TO0_597(unsigned char ucDestinationID, unsigned long ulTimeout, T* ptData32, unsigned long ucNbElements = 1)
{
	int fd;
	unsigned long ulDataLength8=ucNbElements*sizeof(T);

	fd = open("/dev/fifo0x41001010", O_WRONLY);
	if(fd < 0)
		printf("Error while opening fifo0x41001010, errno = %s\n", strerror(errno));
	unsigned char* pcData8 = (unsigned char*)ptData32;
	ssize_t nb_transferred;
	eSpaceStatus status = SPACE_OK;
	do {
		nb_transferred = write(fd, (void*)pcData8, ulDataLength8);
		if(nb_transferred == -1) {
			if (errno == EINTR) {
				continue;
			} else if (errno == EAGAIN) {
				status = SPACE_EMPTY;
				break;
			} else {
				status = SPACE_ERROR;
				break;
			}
		}
		ulDataLength8 -= nb_transferred;
		pcData8 += nb_transferred;
	} while(ulDataLength8 != 0 && nb_transferred != 0);
	close(fd);
	return status;
}

template <typename T> inline eSpaceStatus ModuleWrite_1TO6_607(unsigned char ucDestinationID, unsigned long ulTimeout, T* ptData32, unsigned long ucNbElements = 1)
{
	int fd;
	unsigned long ulDataLength8=ucNbElements*sizeof(T);

	fd = open("/dev/fifo0x4100b010", O_WRONLY);
	if(fd < 0)
		printf("Error while opening fifo0x4100b010, errno = %s\n", strerror(errno));
	unsigned char* pcData8 = (unsigned char*)ptData32;
	ssize_t nb_transferred;
	eSpaceStatus status = SPACE_OK;
	do {
		nb_transferred = write(fd, (void*)pcData8, ulDataLength8);
		if(nb_transferred == -1) {
			if (errno == EINTR) {
				continue;
			} else if (errno == EAGAIN) {
				status = SPACE_EMPTY;
				break;
			} else {
				status = SPACE_ERROR;
				break;
			}
		}
		ulDataLength8 -= nb_transferred;
		pcData8 += nb_transferred;
	} while(ulDataLength8 != 0 && nb_transferred != 0);
	close(fd);
	return status;
}

template <typename T> inline eSpaceStatus ModuleWrite_1TO4_617(unsigned char ucDestinationID, unsigned long ulTimeout, T* ptData32, unsigned long ucNbElements = 1)
{
	int fd;
	unsigned long ulDataLength8=ucNbElements*sizeof(T);

	fd = open("/dev/fifo0x41008010", O_WRONLY);
	if(fd < 0)
		printf("Error while opening fifo0x41008010, errno = %s\n", strerror(errno));
	unsigned char* pcData8 = (unsigned char*)ptData32;
	ssize_t nb_transferred;
	eSpaceStatus status = SPACE_OK;
	do {
		nb_transferred = write(fd, (void*)pcData8, ulDataLength8);
		if(nb_transferred == -1) {
			if (errno == EINTR) {
				continue;
			} else if (errno == EAGAIN) {
				status = SPACE_EMPTY;
				break;
			} else {
				status = SPACE_ERROR;
				break;
			}
		}
		ulDataLength8 -= nb_transferred;
		pcData8 += nb_transferred;
	} while(ulDataLength8 != 0 && nb_transferred != 0);
	close(fd);
	return status;
}

template <typename T> inline eSpaceStatus ModuleWrite_1TO2_627(unsigned char ucDestinationID, unsigned long ulTimeout, T* ptData32, unsigned long ucNbElements = 1)
{
	int fd;
	unsigned long ulDataLength8=ucNbElements*sizeof(T);

	fd = open("/dev/fifo0x41003010", O_WRONLY);
	if(fd < 0)
		printf("Error while opening fifo0x41003010, errno = %s\n", strerror(errno));
	unsigned char* pcData8 = (unsigned char*)ptData32;
	ssize_t nb_transferred;
	eSpaceStatus status = SPACE_OK;
	do {
		nb_transferred = write(fd, (void*)pcData8, ulDataLength8);
		if(nb_transferred == -1) {
			if (errno == EINTR) {
				continue;
			} else if (errno == EAGAIN) {
				status = SPACE_EMPTY;
				break;
			} else {
				status = SPACE_ERROR;
				break;
			}
		}
		ulDataLength8 -= nb_transferred;
		pcData8 += nb_transferred;
	} while(ulDataLength8 != 0 && nb_transferred != 0);
	close(fd);
	return status;
}

template <typename T> inline eSpaceStatus ModuleWrite_1TO21_637(unsigned char ucDestinationID, unsigned long ulTimeout, T* ptData32, unsigned long ucNbElements = 1)
{
	int fd;
	unsigned long ulDataLength8=ucNbElements*sizeof(T);

	fd = open("/dev/fifo0x41006010", O_WRONLY);
	if(fd < 0)
		printf("Error while opening fifo0x41006010, errno = %s\n", strerror(errno));
	unsigned char* pcData8 = (unsigned char*)ptData32;
	ssize_t nb_transferred;
	eSpaceStatus status = SPACE_OK;
	do {
		nb_transferred = write(fd, (void*)pcData8, ulDataLength8);
		if(nb_transferred == -1) {
			if (errno == EINTR) {
				continue;
			} else if (errno == EAGAIN) {
				status = SPACE_EMPTY;
				break;
			} else {
				status = SPACE_ERROR;
				break;
			}
		}
		ulDataLength8 -= nb_transferred;
		pcData8 += nb_transferred;
	} while(ulDataLength8 != 0 && nb_transferred != 0);
	close(fd);
	return status;
}

template <typename T> inline eSpaceStatus ModuleRead_1TO0_649(unsigned char ucDestinationID, unsigned long ulTimeout, T* ptData32, unsigned long ucNbElements = 1)
{
	int fd;
	unsigned long ulDataLength8=ucNbElements*sizeof(T);

	fd = open("/dev/fifo0x41000010", O_RDONLY);
	if(fd < 0)
		printf("Error while opening fifo0x41000010, errno = %s\n", strerror(errno));
	unsigned char* pcData8 = (unsigned char*)ptData32;
	ssize_t nb_transferred;
	eSpaceStatus status = SPACE_OK;
	do {
		nb_transferred = read(fd, (void*)pcData8, ulDataLength8);
		if(nb_transferred == -1) {
			if (errno == EINTR) {
				continue;
			} else if (errno == EAGAIN) {
				status = SPACE_EMPTY;
				break;
			} else {
				status = SPACE_ERROR;
				break;
			}
		}
		ulDataLength8 -= nb_transferred;
		pcData8 += nb_transferred;
	} while(ulDataLength8 != 0 && nb_transferred != 0);
	close(fd);
	return status;
}

template <typename T> inline eSpaceStatus ModuleRead_1TO6_663(unsigned char ucDestinationID, unsigned long ulTimeout, T* ptData32, unsigned long ucNbElements = 1)
{
	int fd;
	unsigned long ulDataLength8=ucNbElements*sizeof(T);

	fd = open("/dev/fifo0x4100a010", O_RDONLY);
	if(fd < 0)
		printf("Error while opening fifo0x4100a010, errno = %s\n", strerror(errno));
	unsigned char* pcData8 = (unsigned char*)ptData32;
	ssize_t nb_transferred;
	eSpaceStatus status = SPACE_OK;
	do {
		nb_transferred = read(fd, (void*)pcData8, ulDataLength8);
		if(nb_transferred == -1) {
			if (errno == EINTR) {
				continue;
			} else if (errno == EAGAIN) {
				status = SPACE_EMPTY;
				break;
			} else {
				status = SPACE_ERROR;
				break;
			}
		}
		ulDataLength8 -= nb_transferred;
		pcData8 += nb_transferred;
	} while(ulDataLength8 != 0 && nb_transferred != 0);
	close(fd);
	return status;
}

template <typename T> inline eSpaceStatus ModuleRead_1TO4_677(unsigned char ucDestinationID, unsigned long ulTimeout, T* ptData32, unsigned long ucNbElements = 1)
{
	int fd;
	unsigned long ulDataLength8=ucNbElements*sizeof(T);

	fd = open("/dev/fifo0x41007010", O_RDONLY);
	if(fd < 0)
		printf("Error while opening fifo0x41007010, errno = %s\n", strerror(errno));
	unsigned char* pcData8 = (unsigned char*)ptData32;
	ssize_t nb_transferred;
	eSpaceStatus status = SPACE_OK;
	do {
		nb_transferred = read(fd, (void*)pcData8, ulDataLength8);
		if(nb_transferred == -1) {
			if (errno == EINTR) {
				continue;
			} else if (errno == EAGAIN) {
				status = SPACE_EMPTY;
				break;
			} else {
				status = SPACE_ERROR;
				break;
			}
		}
		ulDataLength8 -= nb_transferred;
		pcData8 += nb_transferred;
	} while(ulDataLength8 != 0 && nb_transferred != 0);
	close(fd);
	return status;
}

template <typename T> inline eSpaceStatus ModuleRead_1TO2_691(unsigned char ucDestinationID, unsigned long ulTimeout, T* ptData32, unsigned long ucNbElements = 1)
{
	int fd;
	unsigned long ulDataLength8=ucNbElements*sizeof(T);

	fd = open("/dev/fifo0x41002010", O_RDONLY);
	if(fd < 0)
		printf("Error while opening fifo0x41002010, errno = %s\n", strerror(errno));
	unsigned char* pcData8 = (unsigned char*)ptData32;
	ssize_t nb_transferred;
	eSpaceStatus status = SPACE_OK;
	do {
		nb_transferred = read(fd, (void*)pcData8, ulDataLength8);
		if(nb_transferred == -1) {
			if (errno == EINTR) {
				continue;
			} else if (errno == EAGAIN) {
				status = SPACE_EMPTY;
				break;
			} else {
				status = SPACE_ERROR;
				break;
			}
		}
		ulDataLength8 -= nb_transferred;
		pcData8 += nb_transferred;
	} while(ulDataLength8 != 0 && nb_transferred != 0);
	close(fd);
	return status;
}

template <typename T> inline eSpaceStatus ModuleRead_1TO21_703(unsigned char ucDestinationID, unsigned long ulTimeout, T* ptData32, unsigned long ucNbElements = 1)
{
	int fd;
	unsigned long ulDataLength8=ucNbElements*sizeof(T);

	fd = open("/dev/fifo0x41005010", O_RDONLY);
	if(fd < 0)
		printf("Error while opening fifo0x41005010, errno = %s\n", strerror(errno));
	unsigned char* pcData8 = (unsigned char*)ptData32;
	ssize_t nb_transferred;
	eSpaceStatus status = SPACE_OK;
	do {
		nb_transferred = read(fd, (void*)pcData8, ulDataLength8);
		if(nb_transferred == -1) {
			if (errno == EINTR) {
				continue;
			} else if (errno == EAGAIN) {
				status = SPACE_EMPTY;
				break;
			} else {
				status = SPACE_ERROR;
				break;
			}
		}
		ulDataLength8 -= nb_transferred;
		pcData8 += nb_transferred;
	} while(ulDataLength8 != 0 && nb_transferred != 0);
	close(fd);
	return status;
}

// ***********************************************************************
//
// Filename : controller.h
//
// Author : SpaceStudio generation engine
//
// Creation date : Wed Oct 17 09:38:19 EDT 2012
//
//
// ***********************************************************************
#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "systemc.h"
#include "SpaceBaseModule.h"

typedef enum {
	ADD,
	SUBTRACTION,
	MULTIPLY,
	DIVIDE,
	MULTIPLY_MAT
} Operation;

class controller : public SpaceBaseModule
{
	public:

		SC_HAS_PROCESS(controller);

		///
		/// Constructor
		///
		controller(sc_module_name zName, double dClockPeriod, sc_time_unit Unit, unsigned char ucID, unsigned char ucPriority, bool bVerbose);

		///
		/// Members
		///
		void thread(void);
	
	private:

		///
		/// Members
		///

		void sendResult(long data);
		void sendCharacter(unsigned char character);
		unsigned long readInput();
		void readData(long* operand1, long* operand2, Operation* operation);
		long getFirstOperand(unsigned char* ptr);
		long getSecondOperand(unsigned char* ptr);
		long convertCharacterToNumber(unsigned char* ptr, unsigned char length);
		bool isNegative(unsigned char character);
		bool isDigit(unsigned char character);
		bool isSpace(char character);
		bool isOperationCharacter(unsigned char character);
		unsigned long pow(int base, int exponent);
		int getOperationPosition(unsigned char* ptr);
		void readInputStream(unsigned char* ptr);
		void sanitize(unsigned char* ptr, int* position);
		bool isValidCommand(unsigned char* ptr);
		bool isDividedByZeroDetected(unsigned char* ptr);
		bool isOperationDetected(unsigned char* ptr);
		bool isOperand1Detected(unsigned char* ptr);
		bool isOperand2Detected(unsigned char* ptr);
		bool isNumber(unsigned char* ptr, unsigned char length);
		bool isLFDetected(unsigned char* ptr);
		int getLFPosition(unsigned char* ptr);
		bool isLF(unsigned char character);
		unsigned char* trimSpaces(unsigned char* ptr, unsigned char* length);
		Operation getOperation(unsigned char* ptr);
		long delegateOperation(Operation operation, long operand1, long operand2);
		void sendAdditionOperand(long data);
		void sendSubtractionOperand(long data);
		void sendMultiplicationOperand(long data);
		void sendDivisionOperand(long data);
		void sendMultiplicationMatOperand(unsigned long data);
		long readAdditionResult();
		long readSubtractionResult();
		long readMultiplicationResult();
		long readDivisionResult();
		void readMultiplicationMatResult(unsigned long resultBuffer[]);
		void init(unsigned char* ptr);
		int atoi(unsigned char c);
		unsigned char itoa(unsigned int x);
		int getOrder(unsigned long data);
		void displayMessage(char* message);

};

#endif