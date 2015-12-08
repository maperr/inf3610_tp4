///////////////////////////////////////////////////////////////////////////////
//
// Filename : matrix_mul.h
//
// Creation date : Fri Nov 06 11:35:18 EST 2015
//
///////////////////////////////////////////////////////////////////////////////
#ifndef MATRIX_MUL_H
#define MATRIX_MUL_H

#include "SpaceBaseModule.h"

#include "systemc"

class matrix_mul: public SpaceBaseModule {
	public:		
	    SC_HAS_PROCESS(matrix_mul);
		matrix_mul(sc_core::sc_module_name name, double period, sc_core::sc_time_unit unit, unsigned char id, unsigned char priority, bool verbose);	   	
	    void thread(void);

	private:
	    void readOperand();
		void sendResult();
		void multiplyMat();

		unsigned int m_result[90000];
		unsigned int m_operand1[90000];
		unsigned int m_operand2[90000];
};

#endif
