/**
  ******************************************************************************
  * @file           : GPIO.h
  * @author         : 
  * @brief          : Header for all GPIO related functionalities.
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __GPIO_H
#define __GPIO_H

#ifdef __cplusplus
extern "C" {
#endif

/* ------------------------------------- INCLUDES -------------------------------------*/
#include "stm32g4xx_hal.h"

/* --------------------------------- PUBLIC VARIABLES ---------------------------------*/
#define B1_Pin GPIO_PIN_13
#define B1_GPIO_Port GPIOC
#define LD2_Pin GPIO_PIN_5
#define LD2_GPIO_Port GPIOA

/* --------------------------------- PUBLIC FUNCTIONS ---------------------------------*/
void MX_GPIO_Init(void);

#ifdef __cplusplus
}
#endif

#endif /* __GPIO_H */
