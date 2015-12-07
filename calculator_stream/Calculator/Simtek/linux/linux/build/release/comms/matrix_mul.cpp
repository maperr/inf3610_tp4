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

 set_stack_size(0x16000 + 200 * 200 * 4 * 3);

 m_result = new unsigned int[200 * 200];
 m_operand1 = new unsigned int[200 * 200];
 m_operand2 = new unsigned int[200 * 200];
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
 ModuleRead(1, SPACE_BLOCKING, m_operand1, 200 * 200);
 ModuleRead(1, SPACE_BLOCKING, m_operand2, 200 * 200);
}

//////////////////////////////////////////////////////////////////////////////
///
///	Send the result
///
//////////////////////////////////////////////////////////////////////////////
void matrix_mul::sendResult() {
 SpacePrint("Doing shit3...");
 ModuleWrite(1, SPACE_BLOCKING, m_result, 200 * 200);
}

void matrix_mul::multiplyMat() {
 unsigned int i, j, k, sum;

 for (i = 0; i < 200; i++)
 {
  for (j = 0; j < 200; j++)
  {
   sum = 0;
   for (k = 0; k < 200; k++)
   {
    sum += m_operand1[i * 200 + k] * m_operand2[k * 200 + j];
   }
   m_result[i * 200 + j] = sum;
  }
 }
}
