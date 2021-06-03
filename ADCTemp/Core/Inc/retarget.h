/*
 * retarget.h
 *
 *  Created on: Apr 20, 2021
 *      Author: m3jc
 */


#ifndef _RETARGET_H__
#define _RETARGET_H__

#include "stm32f4xx_hal.h"
#include <sys/stat.h>

void RetargetInit(UART_HandleTypeDef *huart);
int _write(int fd, char* ptr, int len);

#endif //#ifndef _RETARGET_H__
