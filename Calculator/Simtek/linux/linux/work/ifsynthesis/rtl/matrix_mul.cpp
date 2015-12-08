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


#include "SpaceSerialization.h"

using sc_core::sc_module;

matrix_mul::matrix_mul(sc_core::sc_module_name zName)
: sc_module(zName)
{
	SC_CTHREAD(thread, ClockPort.pos());
	reset_signal_is( nResetPort, true );
}








void matrix_mul::thread(void) {

	MakeSignalsInactive();
	sc_core::wait();


	sc_core::wait();

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
 ModuleRead(1, SPACE_BLOCKING, m_operand1, 300 * 300);
 ModuleRead(1, SPACE_BLOCKING, m_operand2, 300 * 300);
}

//////////////////////////////////////////////////////////////////////////////
///
///	Send the result
///
//////////////////////////////////////////////////////////////////////////////
void matrix_mul::sendResult() {
 SpacePrint("%d and %d \n", m_result[0], m_result[300 * 300 - 1]);
 ModuleWrite(1, SPACE_BLOCKING, m_result, 300 * 300);
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
static unsigned int getNbBeats(const unsigned int* type, unsigned long nbElements) {
	return nbElements;
}



	#define SPACE_BEGIN_DATA_BEAT \
		while(module->ReadEmptyPort_0.read() == 1) { \
			sc_core::wait(); \
		}

	#define SPACE_END_DATA_BEAT \
		module->ReadEnablePort_0.write(1); \
		sc_core::wait(); \
		module->ReadEnablePort_0.write(0); \
		sc_core::wait();

	eSpaceStatus ModuleRead_1(
		matrix_mul* module,
		unsigned long ulTimeout,
		 unsigned int* ptData32,
		unsigned long nbElements)

{
		unsigned int nbIterations = getNbBeats(ptData32, nbElements);
		unsigned int i;
		eSpaceStatus eStatus;

		unsigned char ucEmpty = module->ReadEmptyPort_0.read().to_uint();

		if(ulTimeout == SPACE_WAIT_FOREVER || !ucEmpty) {

			for(i=0;i<nbIterations;i++) {
			#ifdef SPACE_RTL_CYNTH
				CYN_UNROLL(ON, "$functionName_loop");
			#endif

		SPACE_BEGIN_DATA_BEAT;
		sc_dt::sc_uint<32> temp = module->ReadDataPort_0.read();
		GET_LONG(temp, *ptData32);
		if(i<nbIterations-1) {
			ptData32++;
		}
		SPACE_END_DATA_BEAT;

		}

	    eStatus = SPACE_OK;
	} else {
		eStatus = SPACE_EMPTY;
	}

	return eStatus;

}

#undef SPACE_BEGIN_DATA_BEAT
#undef SPACE_END_DATA_BEAT

#define SPACE_BEGIN_DATA_BEAT \
	while(module->WriteFullPort_0.read() == 1) { \
		sc_core::wait(); \
	}

#define SPACE_END_DATA_BEAT \
	module->WriteEnablePort_0.write(1); \
	sc_core::wait(); \
	module->WriteDataPort_0.write(0); \
	module->WriteEnablePort_0.write(0); \
	sc_core::wait();

	eSpaceStatus ModuleWrite_1(
		matrix_mul* module,
		unsigned long ulTimeout,
		const unsigned int* ptData32,
		unsigned long nbElements)

{
	unsigned int nbIterations = getNbBeats(ptData32, nbElements);
	unsigned int i;
	eSpaceStatus eStatus;

	unsigned char ucFull = module->WriteFullPort_0.read().to_uint();

	if(ulTimeout == SPACE_WAIT_FOREVER || !ucFull) {

		for(i=0;i<nbIterations;i++) {
		#ifdef SPACE_RTL_CYNTH
			CYN_UNROLL(ON, "$functionName_loop");
		#endif

		sc_dt::sc_uint<32> temp = 0;

		SPACE_BEGIN_DATA_BEAT;
		PUT_LONG(temp, *ptData32);

		if(i<nbIterations-1) {
			ptData32++;
		}
		module->WriteDataPort_0.write(temp);
		SPACE_END_DATA_BEAT;

		}

		eStatus = SPACE_OK;
	} else {
		eStatus = SPACE_FULL;
	}

	return eStatus;

}

#undef SPACE_BEGIN_DATA_BEAT
#undef SPACE_END_DATA_BEAT




template <typename T> eSpaceStatus matrix_mul::ModuleRead (
		unsigned char ucDestinationID, unsigned long ulTimeout, T* ptData32, unsigned long nbElements) {
	if(ucDestinationID == 1) {
		return ModuleRead_1(this, ulTimeout, ptData32, nbElements);
	} else
	return SPACE_ERROR;
}


template <typename T> eSpaceStatus matrix_mul::ModuleWrite (
		unsigned char ucDestinationID, unsigned long ulTimeout, T* ptData32, unsigned long nbElements) {
	if(ucDestinationID == 1) {
		return ModuleWrite_1(this, ulTimeout, ptData32, nbElements);
	} else
	return SPACE_ERROR;
}


template <typename T> eSpaceStatus matrix_mul::DeviceRead (
		unsigned char ucDeviceDestinationID, unsigned long ulOffset, T* ptData32,  unsigned long nbElements) {
	return SPACE_ERROR;
}


template <typename T> eSpaceStatus matrix_mul::DeviceWrite (
		unsigned char ucDeviceDestinationID, unsigned long ulOffset, T* ptData32,  unsigned long nbElements) {
	return SPACE_ERROR;
}


eSpaceStatus matrix_mul::RegisterRead(
		unsigned char ucRegisterFileID, unsigned long registerID,  unsigned long* data) {
	return SPACE_ERROR;
}


eSpaceStatus matrix_mul::RegisterWrite(
		unsigned char ucRegisterFileID, unsigned long registerID, const unsigned long* data) {
	return SPACE_ERROR;
}

void matrix_mul::MakeSignalsInactive() {


	ReadEnablePort_0.write(0);

	WriteEnablePort_0.write(0);
	WriteDataPort_0.write(0);


}
