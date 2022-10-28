/**************************
  Name   : HLED_Program.c
  Author : Zeyad Mahmoud
  Version: v1
  Date   : 28 October 2022
**************************/

/* Service Layer */
#include "../SERVICE_LAYER/BIT_CALC.h"
#include "../SERVICE_LAYER/STD_TYPES.h"

/* MCAL LAYER */
#include "../Dio_Driver/DIO_interface.h"

/**
  Function Name        :  HLED_vidInit
  Function Return      :  void
  Function Argument    :  u8 Copy_u8Port, u8 Copy_u8Pin
  Function description :  Initialize the Port and Pins

**/
void HLED_vidInit(u8 Copy_u8Port, u8 Copy_u8Pin){
  switch(Copy_u8Port){
    case PORT_A:
      SETBIT(DDRA,Copy_u8Pin);
      break;
    case PORT_B:
      SETBIT(DDRB,Copy_u8Pin);
      break;
    case PORT_C:
      SETBIT(DDRC,Copy_u8Pin);
      break;
    case PORT_D:
      SETBIT(DDRD,Copy_u8Pin);
      break;
  }
}

/**
  Function Name        :  HLED_vidLedTurnOn
  Function Return      :  void
  Function Argument    :  u8 Copy_u8Port, u8 Copy_u8Pin
  Function description :  Turn On the led
**/

void HLED_vidLedTurnOn(u8 Copy_u8Port, u8 Copy_u8Pin){
  switch(Copy_u8Port){
    case PORT_A:
      SETBIT(PORTA,Copy_u8Pin);
      break;
    case PORT_B:
      SETBIT(PORTB,Copy_u8Pin);
      break;
    case PORT_C:
      SETBIT(PORTC,Copy_u8Pin);
      break;
    case PORT_D:
      SETBIT(PORTD,Copy_u8Pin);
      break;
  }
}


/**
  Function Name        :  HLED_vidLedTurnOff
  Function Return      :  void
  Function Argument    :  u8 Copy_u8Port, u8 Copy_u8Pin
  Function description :  Turn OFF the led
**/

void HLED_vidLedTurnOff(u8 Copy_u8Port, u8 Copy_u8Pin){
  switch(Copy_u8Port){
    case PORT_A:
      CLEARBIT(PORTA,Copy_u8Pin);
      break;
    case PORT_B:
      CLEARBIT(PORTB,Copy_u8Pin);
      break;
    case PORT_C:
      CLEARBIT(PORTC,Copy_u8Pin);
      break;
    case PORT_D:
      CLEARBIT(PORTD,Copy_u8Pin);
      break;
  }
}


/**
  Function Name        :  HLED_vidLedToggle
  Function Return      :  void
  Function Argument    :  u8 Copy_u8Port, u8 Copy_u8Pin
  Function description :  Toggle the led
**/

void HLED_vidLedToggle(u8 Copy_u8Port, u8 Copy_u8Pin){
  switch(Copy_u8Port){
    case PORT_A:
      TOGGLEBIT(PORTA,Copy_u8Pin);
      break;
    case PORT_B:
      TOGGLEBIT(PORTB,Copy_u8Pin);
      break;
    case PORT_C:
      TOGGLEBIT(PORTC,Copy_u8Pin);
      break;
    case PORT_D:
      TOGGLEBIT(PORTD,Copy_u8Pin);
      break;
  }
}
