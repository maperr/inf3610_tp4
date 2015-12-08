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

class matrix_mul: public sc_core::sc_module {
	public:		
	    SC_HAS_PROCESS(matrix_mul);
	sc_core::sc_in< bool > nResetPort;
	sc_core::sc_in< bool > ClockPort;
	sc_core::sc_out< sc_dt::sc_lv<1> > ReadEnablePort_0;
	sc_core::sc_in< sc_dt::sc_lv<1> > ReadEmptyPort_0;
	sc_core::sc_in< sc_dt::sc_lv<32> > ReadDataPort_0;
	sc_core::sc_out< sc_dt::sc_lv<1> > WriteEnablePort_0;
	sc_core::sc_in< sc_dt::sc_lv<1> > WriteFullPort_0;
	sc_core::sc_out< sc_dt::sc_lv<32> > WriteDataPort_0;

public:

	matrix_mul(sc_core::sc_module_name zName);

	// Timing Annotation added for monitoring of computation time
    void computeFor(int nbCycles) {}

    /// Returns the verbose module status.
    bool GetVerbose() {return false;}

    ///
	void sc_stop(void) {}

	template <typename T> eSpaceStatus ModuleRead (
		unsigned char ucDestinationID,
		unsigned long ulTimeout,
		T* ptData32,
		unsigned long nbElements = 1);

	template <typename T> eSpaceStatus ModuleWrite (
		unsigned char ucDestinationID,
		unsigned long ulTimeout,
		T* ptData32,
		unsigned long nbElements = 1);

	template <typename T> eSpaceStatus DeviceRead(
		unsigned char ucDeviceDestinationID,
		unsigned long ulOffset,
        T* ptData32,
        unsigned long nbElements = 1);

    template <typename T> eSpaceStatus DeviceWrite(
	    unsigned char ucDeviceDestinationID,
		unsigned long ulOffset,
        T* ptData32,
        unsigned long nbElements = 1);

	eSpaceStatus RegisterRead(unsigned char ucRegisterFileID, unsigned long registerID, unsigned long* data);

    eSpaceStatus RegisterWrite(unsigned char ucRegisterFileID, unsigned long registerID, const unsigned long* data);

	void MakeSignalsInactive();

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