/*
 * main.c
 *
 * Created: 10/28/2022 2:23:13 PM
 *  Author: Zeyad Mahmoud
 */ 

/* Service Layer */
#include "SERVICE_LAYER/BIT_CALC.h"
#include "SERVICE_LAYER/STD_TYPES.h"

/*MCAL Layer*/
#include "DIO_Driver/DIO_config.h"
#include "DIO_Driver/DIO_interface.h"
#include "DIO_Driver/DIO_private.h"

/* HAL Layer */
#include "HLED_Driver/HLED_config.h"
#include "HLED_Driver/HLED_Interface.h"
#include "HLED_Driver/HLED_Private.h"

#include <xc.h>
#include <avr/delay.h>
int main(void)
{
	HLED_vidInit(PORT_A,PIN0);
    while(1)
    {
        HLED_vidLedToggle(PORT_A,PIN0);
		_delay_ms(500);
    }
}