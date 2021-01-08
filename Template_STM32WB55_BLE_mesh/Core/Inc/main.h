/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under Ultimate Liberty license
  * SLA0044, the "License"; You may not use this file except in compliance with
  * the License. You may obtain a copy of the License at:
  *                             www.st.com/SLA0044
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32wbxx_hal.h"
#include "app_conf.h"
#include "stm32wbxx_ll_system.h"
#include "stm32wbxx_ll_gpio.h"
#include "stm32wbxx_ll_exti.h"
#include "stm32wbxx_ll_bus.h"
#include "stm32wbxx_ll_cortex.h"
#include "stm32wbxx_ll_rcc.h"
#include "stm32wbxx_ll_utils.h"
#include "stm32wbxx_ll_pwr.h"
#include "stm32wbxx_ll_dma.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define COMP1_EXTI0_Pin LL_GPIO_PIN_0
#define COMP1_EXTI0_GPIO_Port GPIOA
#define COMP1_EXTI0_EXTI_IRQn EXTI0_IRQn
#define COMP2_EXTI1_Pin LL_GPIO_PIN_1
#define COMP2_EXTI1_GPIO_Port GPIOA
#define COMP2_EXTI1_EXTI_IRQn EXTI1_IRQn
#define COMP_VCC_Pin LL_GPIO_PIN_2
#define COMP_VCC_GPIO_Port GPIOA
#define ADC1_VCC_Pin LL_GPIO_PIN_4
#define ADC1_VCC_GPIO_Port GPIOA
#define MOTOR1_Pin LL_GPIO_PIN_5
#define MOTOR1_GPIO_Port GPIOA
#define MOTOR2_Pin LL_GPIO_PIN_6
#define MOTOR2_GPIO_Port GPIOA
#define MOTOR3_Pin LL_GPIO_PIN_7
#define MOTOR3_GPIO_Port GPIOA
#define MOTOR4_Pin LL_GPIO_PIN_8
#define MOTOR4_GPIO_Port GPIOA
#define SW1_Pin LL_GPIO_PIN_4
#define SW1_GPIO_Port GPIOC
#define SW1_EXTI_IRQn EXTI4_IRQn
#define LED_GREEN_Pin LL_GPIO_PIN_0
#define LED_GREEN_GPIO_Port GPIOB
#define LED_RED_Pin LL_GPIO_PIN_1
#define LED_RED_GPIO_Port GPIOB
#define TEST_Pin LL_GPIO_PIN_1
#define TEST_GPIO_Port GPIOD
#define LED_BLUE_Pin LL_GPIO_PIN_5
#define LED_BLUE_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
