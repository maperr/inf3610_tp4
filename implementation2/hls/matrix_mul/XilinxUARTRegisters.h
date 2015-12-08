///////////////////////////////////////////////////////////////////////////////
///\\file     UARTRegisters.h
///\\brief    Describes registers used in the UART software driver
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

#ifndef UART_REGISTER_H
#define UART_REGISTER_H



#define UART_TRANSMIT_FIFO_REG_OFFSET	0x00000004ul		///< Transmit FIFO
#define UART_RECEIVE_FIFO_REG_OFFSET	0x00000000ul		///< Receive FIFO
#define UART_STATUS_REG_OFFSET			0x00000008ul		///< Status Register
#define UART_CONTROL_REG_OFFSET			0x00000010ul		///< Control Register - but v1.00b doc says 0x0C!


///////////////////////////////////////////////////////////////////////////////
///
///\brief     CONSTANT DEFINITIONS
///
///////////////////////////////////////////////////////////////////////////////
// Status register
#define	UART_BIT_INTR_ENABLED		0x10	///< bit 27 : indicates if the interrupt is enabled
#define	UART_BIT_TX_FIFO_FULL		0x08	///< bit 28 : indicates if transmit FIFO is full
#define	UART_BIT_TX_FIFO_EMPTY		0x04	///< bit 29 : indicates if transmit FIFO is empty
#define	UART_BIT_RX_FIFO_FULL		0x02	///< bit 30 : indicates if receive FIFO is full
#define	UART_BIT_TX_FIFO_VALID_DATA	0x01	///< bit 31 : indicates if receive FIFO contains a valid data

//Control Register
#define	UART_BIT_ENABLE_INTR		0x10	///< bit 27 : enables the interrupt
#define	UART_BIT_RST_RX_FIFO		0x02	///< bit 30 : clear receive FIFO
#define	UART_BIT_RST_TX_FIFO		0x01	///< bit 31 : clear transmit FIFO


#endif //UART_REGISTER_H


/* (c) Space Codesign Systems Inc. 2005-2014 */
