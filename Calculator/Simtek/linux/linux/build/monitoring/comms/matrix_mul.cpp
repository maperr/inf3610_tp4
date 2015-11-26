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

matrix_mul::matrix_mul(sc_core::sc_module_name name, double period, sc_core::sc_time_unit unit, unsigned char id, unsigned char priority, bool verbose)
:SpaceBaseModule(name, period, unit, id, priority, verbose) {
 SC_THREAD(thread);

 set_stack_size(0x16000 + 3*3*4*3);

 m_result = new unsigned int[3*3];
 m_operand1= new unsigned int[3*3];
 m_operand2 = new unsigned int[3*3];
}

void matrix_mul::thread(void)
{
 while(1) {
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
void matrix_mul::readOperand()
{
 ModuleRead(1, SPACE_BLOCKING, m_operand1, 3 * 3);
 ModuleRead(1, SPACE_BLOCKING, m_operand2, 3 * 3);
}

//////////////////////////////////////////////////////////////////////////////
///
///	Send the result
///
//////////////////////////////////////////////////////////////////////////////
void matrix_mul::sendResult()
{
 SpacePrint("%d z %d = %d and %d \n", m_operand1[0], m_operand2[0], m_result[0], m_result[3 * 3 - 1]);
 ModuleWrite(1, SPACE_BLOCKING, m_result, 3 * 3);
}

void matrix_mul::multiplyMat()
{
 unsigned int i, j, k, sum;

 for(i = 0; i < 3; i++)
 {
  for (j = 0; j < 3; j++)
  {
   sum = 0;
   for(k = 0; k < 3; k++)
   {
    sum += m_operand1[i * 3 + k] * m_operand2[k * 3 + j];
   }
   m_result[i*3 + j] = sum;
  }
 }
}