/**********************************************************************
	Brent Honzaki
	CST321 Microprocessors
	Lab 6: UART
**********************************************************************/
#ifndef UART_ISR_H
#define UART_ISR_H

/**********************************************************************
	UART_ISR_SETUP()
	Initializes the UART module. Sets the Baud Rate Generator such that
	the baud is 115.2K baud. Sets the RF3 pin to output. 
	
	BRG should be: BRG = (Fpb / (2*Fsclk))-1 where Fpb is the frequency
	of the peripheral bus clock, and Fsclk is the desired speed of the
	SPI transmission clock. Round to the nearest whole integer, do not
	use negative integers or 0. 
**********************************************************************/
void UART_ISR_SETUP();

/**********************************************************************
	SEND_BYTE()
	Initiate a write operation of the UART device.
	Data must already be in the UART's Transmit buffer
**********************************************************************/
void SEND_BYTE();


/**********************************************************************
	LED_DELAY()
	causes the LEDs to stay on for a period of time (determined by the
	global variable LED_DELAY). Because without it, the LEDs flash too
	fast to see.
**********************************************************************/
void LED_DELAY();

/**********************************************************************
	UART_ISR()
	Handles the transmitting of data back and forth between the serial
	and the pic.
**********************************************************************/
void UART_ISR( void );




#endif
