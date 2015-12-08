///////////////////////////////////////////////////////////////////////////////
///
///         Space Libraries - Space Codesign Systems Inc. (http://www.spacecodesign.com)
///         (c) All Rights Reserved. 2005-2014                            
///                                                                       
///         This file contains proprietary, confidential information of Space Codesign 
///         Systems Inc. and may be used only pursuant to the terms of a valid license 
///         agreement with Space Codesign Systems Inc. For more information about licensing,
///         please contact your Space Codesign representative. 
/// 
///////////////////////////////////////////////////////////////////////////////
#ifndef	SPACE_TYPES_H
#define	SPACE_TYPES_H


///////////////////////////////////////////////////////////////////////////////
///\class     SPACE_STATUS
///
///\brief     Status returned by the Space Codesign engined for end users
///
///////////////////////////////////////////////////////////////////////////////
static const unsigned char SPACE_OK = 0;				///< Tells the operation was completed successfully
static const unsigned char SPACE_ERROR = 1;			///< Tells the operation did not complete and simulation 
static const unsigned char SPACE_EMPTY = 2;			///< may be corrupted or may fail
static const unsigned char SPACE_FULL  = 3;			///> Tells the operation cannot be completed because no storage is available
static const unsigned char SPACE_NOT_CONNECTED = 99; 	///< REports an access to an unconnected port

typedef unsigned char eSpaceStatus;
	

///////////////////////////////////////////////////////////////////////////////
///\enum     SpaceChannelStatusStr
///
///\brief    Statuses returned when using Space Interface Methods
///////////////////////////////////////////////////////////////////////////////
typedef enum
{ 
/**** for platform ****/
	SPACE_CHANNEL_OK = 0,				// Was successfully completed from end to end
	SPACE_CHANNEL_FULL = 1,					// Channel is FULL and write operation was cancelled
	SPACE_CHANNEL_EMPTY = 2,				// Nothing to read and data pointer is invalid
	SPACE_CHANNEL_UNUSED_STATUS_1 = 3,		// Currently unused status code

	SPACE_CHANNEL_UNUSED_STATUS_2 = 4,				// Currently unused status code
    SPACE_CHANNEL_ADDR_OUT_OF_RANGE = 5,	// Destination Address was out of range
	
	SPACE_CHANNEL_ERROR = 6,				// An unrecoverable error from which the system cannot recover occured
										// Users receiving this error are recommended to stop the simulation
	SPACE_CHANNEL_TERMINATOR_ACCESS = 7,	// An unbound port was accessed. 
										// Users receiving this error are recommended to stop the simulation

    SPACE_CHANNEL_MSG_SIZE_ERROR = 8,		// Platform: Unsupported Size of Request
    SPACE_CHANNEL_NO_QUEUE_AVAILABLE = 9,	// SW:No queue available in FreeQueuePool (in the case of writing)
	SPACE_CHANNEL_UNUSED_STATUS_4 = 10,		// Currently unused status code

	/**** for RTL ****/
	SPACE_CHANNEL_IN_PROGRESS = 11,			// Request currently being processed
	
	
/**** NEW ****/

	SPACE_UNKNOWN_DESTINATION = 12,
	SPACE_INVALID_OFFSET = 13
	

} eSpaceChannelStatus;


///////////////////////////////////////////////////////////////////////////////
///\enum     eSpaceTransactionType
///
///\brief    SPACE Transaction options. 
///\note     Updated with unsigned long type. 
///////////////////////////////////////////////////////////////////////////////
static const unsigned long SPACE_NON_BLOCKING	= 0;    		///< Indicates the transaction is non blocking
static const unsigned long SPACE_NO_WAIT		= 0;
static const unsigned long SPACE_BLOCKING		= 0xFFFFFFFF;  ///< Indicates the transaction is blocking
static const unsigned long SPACE_WAIT_FOREVER	= 0xFFFFFFFF;

typedef unsigned long eSpaceTransactionType;


///////////////////////////////////////////////////////////////////////////////
///\class     enum eSpaceComponentType
///
///\brief     Descriptor found in eSpaceComponentType representing either
///           a module or a device 
///////////////////////////////////////////////////////////////////////////////
typedef enum
{ 
    SPACE_UNREGISTERED = 0,
    SPACE_MODULE = 1,
    SPACE_DEVICE = 2, 
    //SPACE_MODULE_ADAPTER = 3,
	SPACE_ISS_ADAPTER = 4,
	SPACE_REGISTER_FILE = 5,
	SPACE_SLAVE_BRIDGE = 6
} eSpaceComponentType;


///////////////////////////////////////////////////////////////////////////////
///\enum      eSpaceCommunicationType
///
///\brief      SPACE communication types
///////////////////////////////////////////////////////////////////////////////
typedef enum
{
	SPACE_MODULE_READ = 0,
	SPACE_MODULE_WRITE = 1,
	SPACE_DEVICE_READ = 2,
	SPACE_DEVICE_WRITE = 3,
	SPACE_REGISTER_READ = 4,
	SPACE_REGISTER_WRITE = 5,
	SPACE_UNKNOWN_COMMUNICATION = 0xFF
} eSpaceCommunicationType;

#endif

/* (c) Space Codesign Systems Inc. 2005-2014 */

