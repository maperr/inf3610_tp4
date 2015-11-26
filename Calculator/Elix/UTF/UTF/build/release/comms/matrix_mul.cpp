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

matrix_mul::matrix_mul(sc_core::sc_module_name name, double period, sc_core::sc_time_unit unit, unsigned char id, unsigned char priority, bool verbose)
:SpaceBaseModule(name, period, unit, id, priority, verbose) {
 SC_THREAD(thread);
}

void matrix_mul::thread(void) {

 long* operand1;
 long* operand2;
 long* result;

 while(1) {
  operand1 = readOperand();
  operand2 = readOperand();
  result = operand1;
  //result = multiply(operand1, operand2);
  sendResult(result);
 }
}

//////////////////////////////////////////////////////////////////////////////
///
///	Read an operand
///
//////////////////////////////////////////////////////////////////////////////
long* matrix_mul::readOperand()
{
 long* data;

 ModuleRead(1, SPACE_BLOCKING, data);

    return data;
}

//////////////////////////////////////////////////////////////////////////////
///
///	Send the result
///
//////////////////////////////////////////////////////////////////////////////
void matrix_mul::sendResult(long* data)
{
 ModuleWrite(1, SPACE_BLOCKING, data);
}
