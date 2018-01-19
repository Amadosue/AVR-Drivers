

#ifndef UART_H_
#define UART_H_

#include "stdMacros.h"

void UART_init();
void UART_Tx(uint8_t);
uint8_t UART_Rx();


#endif /* UART_H_ */