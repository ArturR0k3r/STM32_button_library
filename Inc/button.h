/**
* @file button.h
*
* @brief button interact header file
*
* @par
* COPYRIGHT NOTICE: 2022 BSW TECH
*/
#ifndef BUTTON_H
#define BUTTON_H

#include "main.h"

typedef struct
{
	uint16_t PIN;
	uint8_t StateFlag;
	GPIO_TypeDef *PORT;
} button;


/**
  * @brief  Standard button checking function
  *
  * @param Button you want to check
  *
  * @return T or F if button was pressed or wasn't
  */
uint8_t Button_Check(button BTN);

#endif/*BUTTON_H*/
/*** end of file ***/
