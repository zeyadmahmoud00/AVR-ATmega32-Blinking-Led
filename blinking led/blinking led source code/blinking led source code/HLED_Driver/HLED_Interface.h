/*************************************
  HLED_Interface.h
  Author: Zeyad Mahmoud
  Version: v1
  Date: 28 october 2022
**************************************/


#ifndef HLED_INTERFACE_H_
#define HLED_INTERFACE_H_

/** service layer**/
#include "../SERVICE_LAYER/BIT_CALC.h"
#include "../SERVICE_LAYER/STD_TYPES.h"

/** MCAL LAyer **/
#include "../Dio_Driver/DIO_interface.h"

/* initialization of the led */
void HLED_vidInit(u8 Copy_u8Port, u8 Copy_u8Pin);

/* turn on the led */
void HLED_vidLedTurnOn(u8 Copy_u8Port, u8 Copy_u8Pin);

/* turn off the led*/
void HLED_vidLedTurnOff(u8 Copy_u8Port, u8 Copy_u8Pin);

/* initialization of the led */
void HLED_vidLedToggle(u8 Copy_u8Port, u8 Copy_u8Pin);


#endif // HLED_INTERFACE_H_
