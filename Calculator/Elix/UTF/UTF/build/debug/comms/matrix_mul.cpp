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
}

void matrix_mul::thread(void) {

 unsigned long* operand1;
 unsigned long* operand2;
 unsigned long* result;

 while(1) {
  operand1 = readOperand();
  operand2 = readOperand();
  result = multiplyMat(operand1, operand2);
  sendResult(result);
 }
}

//////////////////////////////////////////////////////////////////////////////
///
///	Read an operand
///
//////////////////////////////////////////////////////////////////////////////
unsigned long* matrix_mul::readOperand()
{
 unsigned long* data = new unsigned long[3 * 3];

 ModuleRead(1, SPACE_BLOCKING, data, 3 * 3);

    return data;
}

//////////////////////////////////////////////////////////////////////////////
///
///	Send the result
///
//////////////////////////////////////////////////////////////////////////////
void matrix_mul::sendResult(unsigned long* data)
{
 ModuleWrite(1, SPACE_BLOCKING, data, 3 * 3);
}

unsigned long* matrix_mul::multiplyMat(unsigned long* operand1, unsigned long* operand2)
{
 unsigned long* result = new unsigned long[3 * 3];
 for(unsigned int i = 0; i < 3; i++)
 {
  for (unsigned int j = 0; j < 3; j++)
  {
   unsigned long sum = 0;
   for(unsigned int k = 0; k < 3; k++)
   {
    sum += operand1[i * 3 + k] * operand2[k * 3 + j];
   }
   result[i*3 + j] = sum;
  }
 }
 return result;
}
