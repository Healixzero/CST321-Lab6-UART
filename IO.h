/**********************************************************************
	Brent Honzaki
	CST321 Microprocessors
	IO devices: LEDs and Buttons interface
**********************************************************************/
#ifndef IO_H
#define IO_H

#include<plib.h>
#include<stddef.h>
#include<sys/types.h>	// to use uint8/16/32_t data type

/**********************************************************************
	IO_SETUP()
	Initializes the IO necessary to use a few lights tied to RD1, RD2,
	RD3, RA4, and RA5. also initializes the necessary pins to use RD13
	as an input.  lastly, it sets the RD outputs to "lights off"
**********************************************************************/
void IO_SETUP();

/**********************************************************************
	TURN_LEDS_OFF()
	Turns all the RD controlled LEDs off
**********************************************************************/
inline void TURN_LEDS_OFF( uint8_t led_color );

/**********************************************************************
	TURN_LEDS_ON()
	Turns all the RD controlled LEDs on
**********************************************************************/
inline void TURN_LEDS_ON( uint8_t led_color );

/**********************************************************************
	TOGGLE_LEDS()
	Turns all the RD controlled LEDs to their opposite states
**********************************************************************/
inline void TOGGLE_LEDS( uint8_t led_color );

/**********************************************************************
	TOGGLE_RA4()
	Inverts the state of RA4.
**********************************************************************/
inline void TOGGLE_RA4();

/**********************************************************************
	CHECK_FOR BUTTON_PRESS()
	Checks to see if a button is pressed. If a function pointer is 
	passed in, then it will run the program every loop.
**********************************************************************/
inline void CHECK_FOR_BUTTON_PRESS( void (*foo)(void) );

#endif
