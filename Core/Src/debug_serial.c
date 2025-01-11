/*
 * =====================================================================================
 *
 *       Filename:  debug_serial.c
 *
 *    Description:  Serial debug source code.
 *
 *        Version:  1.0
 *        Created:  1/11/2025 12:32:26 PM
 *
 *         Author:  Pranav Vasudevan
 *
 * =====================================================================================
 */


#include <stdlib.h>
#include "debug_serial.h"
#include <stdarg.h>
#include <string.h>
#include <stdio.h>
/*
 * ===  FUNCTION  ======================================================================
 *         Name:  debug_print
 *  Description:  printf style debug over uart.
 *
 *       Inputs:  Data to be printed .
 *       Output:  None.
 * =====================================================================================
 */
void debug_print(char *format,...)
{
	#if DEBUG_UART_EN == 1

		char str[80];
		va_list args;
		va_start(args, format);
		vsprintf(str, format, args);
		HAL_UART_Transmit(DEBUG_UART_HANDLE, (uint8_t*)str, strlen(str), HAL_MAX_DELAY);
		va_end(args);

	#endif
}
