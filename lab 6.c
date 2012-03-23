/**********************************************************************
	Code for testing the UART ISRs
	
	Brent Honzaki
	CST321 Microprocessors
	Lab 6: UART
**********************************************************************/

#include<p32xxxx.h>
#include<plib.h>
#include<stddef.h>
#include<sys/types.h>	// to use uint8/16/32_t data type
#include "UART_ISR.h"
#include "IO.h"

// # defines to use as aliases for masking

// # define states

// Set SYSCLK = 80MHz, PBCLK = 80MHz
#pragma config POSCMOD=XT, FNOSC=PRIPLL, FPLLIDIV=DIV_2, FPLLMUL=MUL_20, FPLLODIV=DIV_1
#pragma config FPBDIV=DIV_1, FWDTEN=OFF, CP=OFF, BWP=OFF

// Set the Baud Rate

// Tests the UART ISR

void UART_ISR();


int main()
{
		// Reduce the # of wait states, turn on cache
		SYSTEMConfig(80000000L, SYS_CFG_WAIT_STATES | SYS_CFG_PCACHE );
		
		// Setup configures the IO devices (LEDs)
		IO_SETUP();
		
		// Setup configures the module to use the UART
		UART_ISR_SETUP();
		
		while(1)
		{
		}
		
	return (0);
}
