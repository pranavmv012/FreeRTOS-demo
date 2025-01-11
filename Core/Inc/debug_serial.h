/*
 * =====================================================================================
 *
 *       Filename:  debug_serial.h
 *
 *    Description:  Serail debug header. 
 *
 *        Created:  1/11/2025 12:35:39 PM
 *
 *         Author:  Pranav Vasudevan
 *
 * =====================================================================================
 */
#ifndef __DEBUG_SERIAL_H__
#define __DEBUG_SERIAL_H__ 1

#include <stdio.h>
#include <usart.h>

#define DEBUG_UART_EN  1
#define DEBUG_UART_HANDLE &huart2


void debug_print(char *format,...);


#endif /* __DEBUG_SERIAL_H__ */
