/**
 * \file
 * \brief FreeRTOS for Teensy 3.x and Due
 */
#ifndef stm32FreeRTOS_h
#define stm32FreeRTOS_h

#ifndef STM32F4xx
#error STM32F4xx required
#else  // __arm__
//------------------------------------------------------------------------------
/** FreeRTOS_ARM version YYYYMMDD */
#define FREE_RTOS_ARM_VERSION 20171214
//------------------------------------------------------------------------------
#include "FreeRTOS/FreeRTOS.h"
#include "FreeRTOS/task.h"
#include "FreeRTOS/queue.h"
#include "FreeRTOS/croutine.h"
#include "FreeRTOS/semphr.h"
#include "FreeRTOS/portmacro.h"
#include "FreeRTOS/cmsis_os.h"
#endif  // stm32
#endif  // stm32FreeRTOS_h
