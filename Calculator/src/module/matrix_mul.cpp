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
//#include "matrix_def.h"
//#include "matrix.h"

matrix_mul::matrix_mul(sc_core::sc_module_name name, double period,
		sc_core::sc_time_unit unit, unsigned char id, unsigned char priority,
		bool verbose) :
		SpaceBaseModule(name, period, unit, id, priority, verbose) {
	SC_THREAD(thread);

	set_stack_size(0x16000 + 300 * 300 * 4 * 3);
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
//yfgfygdfy
void matrix_mul::readOperand() {
	ModuleRead(CONTROLLER_ID, SPACE_BLOCKING, m_operand1, 300 * 300);
	ModuleRead(CONTROLLER_ID, SPACE_BLOCKING, m_operand2, 300 * 300);
}

//////////////////////////////////////////////////////////////////////////////
///
///	Send the result
///
//////////////////////////////////////////////////////////////////////////////
void matrix_mul::sendResult() {
	SpacePrint("%d and %d \n", m_result[0], m_result[300 * 300 - 1]);
	ModuleWrite(CONTROLLER_ID, SPACE_BLOCKING, m_result, 300 * 300);
}

void matrix_mul::multiplyMat() {
	unsigned int i, j, k, sum;

	L1: for (i = 0; i < 300; i++)
	{
		L2: for (j = 0; j < 300; j++)
		{
			sum = 0;
			L3: for (k = 0; k < 300; k++)
			{
#pragma HLS unroll
				sum += m_operand1[i * 300 + k] * m_operand2[k * 300 + j];
			}
			m_result[i * 300 + j] = sum;
		}
	}
}
