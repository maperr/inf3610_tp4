////////////////////////////////////////////////////////////////////////////////
//
// Filename : mainarmCortexA91.cpp
//
// Author : SpaceStudio generation engine
//
// Warning: This file content will be overwritten by the next generation process.
//
////////////////////////////////////////////////////////////////////////////////

#ifdef __cplusplus
extern "C"
{
#endif
	int sc_main(int arg_count, char **arg_value);
#ifdef __cplusplus	
}	
#endif
	
#include "ApplicationDefinitions.h"
#include "PlatformDefinitions.h"
#include "controller.h"
#include "OSConfiguration.h"

#include "systemc"

using sc_core::SC_SEC;
using sc_core::SC_MS;
using sc_core::SC_US;
using sc_core::SC_NS;
using sc_core::SC_PS;				
using sc_core::SC_FS;



int sc_main(int arg_count, char **arg_value)
{
	// Module(s) instantiation
		
	controller controller1("controller1", 10, SC_NS, CONTROLLER_ID, CONTROLLER_PRIO, false);	
	
	// Simulation section  -- Begin
	
	sc_core::sc_start();

	// Simulation section  -- End
	

	
    return 0; // No problem occurs
}
