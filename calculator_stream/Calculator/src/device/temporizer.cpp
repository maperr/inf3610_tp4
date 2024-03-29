// ***********************************************************************
//
// Filename : temporizer.cpp
//
// Author : SpaceStudio generation engine
//
// Creation date : Mon Jun 06 12:25:24 EDT 2011
//
//
// ***********************************************************************

#include "temporizer.h"
#include <tlm>
#include <PlatformDefinitions.h>
#include <ApplicationDefinitions.h>

//
// temporizer::temporizer
// ***********************************************************************
///
/// Constructor : please initialize variables here
///
/// @param  =>  zName : SystemC name of the device
/// @param  =>  dClockPeriod : Clock Period value
/// @param  =>  Unit : Clock Period Unit
/// @param  =>  ucID : Unique ID of the device
/// @param  =>  bVerbose : Verbose Flag (use GetVerbose())
///
// ***********************************************************************
temporizer::temporizer(	sc_module_name zName,
								double dClockPeriod,
								sc_time_unit Unit,
								unsigned char ucID, 
						   		bool bVerbose)
:	SpaceBaseDevice( zName, sc_time(dClockPeriod, Unit), ucID, bVerbose)
{	
	m_nbBytes = 0;
	
	SC_THREAD(packet_arrival_thread);
	//dont_initialize();
}

//
// temporizer::~temporizer
// ***********************************************************************
///
/// Please free all allocated memory
///
// ***********************************************************************
temporizer::~temporizer()
{
	// please free all malloc
	
}


//
// temporizer::before_end_of_elaboration
// ***********************************************************************
/// 
/// SystemC Initialization Phase Method
///
// ***********************************************************************
void temporizer::before_end_of_elaboration()
{
	// Do not remove the following line, as it is needed for proper initialization
	SpaceBaseDevice::before_end_of_elaboration();

	// User device elaboration goes here below
	
}

//
// temporizer::end_of_elaboration
// ***********************************************************************
///
/// SystemC Initialization Phase Method
///
// ***********************************************************************
void temporizer::end_of_elaboration()
{
	// Do not remove the following line, as it is needed for proper initialization
	SpaceBaseDevice::end_of_elaboration();

	// User device elaboration goes here below
	
}

//
// SlaveRead
// ***********************************************************************
///
/// Read requests coming from the bus via the adapter are processed here.
/// Users must return the value read by the originator.
///
/// @param  =>  trans: TLM 2.0 generic payload 
/// @param  =>  delay: TLM 2.0 delay parameter
///
// ***********************************************************************
void temporizer::SlaveRead(tlm::tlm_generic_payload& trans, sc_time& delay)
{	
	// Check if we're still in the current packet or if we have moved on to the next packet
	m_nbBytes += trans.get_data_length();
	
	if(m_nbBytes > PACKET_LENGTH) {
		// This request is for data that belongs to the next packet, not the current packet
		// Simulate interarrival packet period
		// Important: we need to actually wait(), not just increment the delay parameter,
		// else the simulation might freeze if the external application is waiting for input
		// generated by the simulation
		wait(delay);
		wait(packet_arrived);
		delay = SC_ZERO_TIME;
		
		// Remove completed packets from the byte count
		// Note: we assume a given TLM 2.0 transaction cannot span three different packets
		m_nbBytes -= PACKET_LENGTH;
	}
	
	// Forward transaction to ExternalIO
	ExternalIOPort->SlaveRead(trans, delay);
}
  
//
// SlaveWrite
// ***********************************************************************
/// 
/// Write requests coming from the bus via the adapter are processed here.
/// Users must store the value wrote by the originator.
///
/// @param  =>  trans: TLM 2.0 generic payload 
/// @param  =>  delay: TLM 2.0 delay parameter
///
// ***********************************************************************
void temporizer::SlaveWrite(tlm::tlm_generic_payload& trans, sc_time& delay )
{
	// Forward transaction to ExternalIO
	ExternalIOPort->SlaveWrite(trans, delay);
}

void temporizer::packet_arrival_thread() 
{
	wait(BOOT_PERIOD); // Let the processors boot before sending packets
	while(1) {
		packet_arrived.notify();
		wait(PACKET_INTERARRIVAL_PERIOD);
	}	
}

// eof
