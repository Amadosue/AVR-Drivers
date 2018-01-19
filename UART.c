
#include "UART.h"

void UART_init()
{
	  UBRRL=77;
	  SETBIT(UCSRB,TXEN);
	  SETBIT(UCSRB,RXEN);
	  
	  SETBIT(UCSRC,UCSZ0);
	  SETBIT(UCSRC,UCSZ1);
	  
	  
}

uint8_t UART_Rx()
{
	while(READBIT(UCSRA,RXC) == 0);
	return UDR;
}

void UART_Tx(uint8_t count)
{
	SETBIT(DDRD,DDD1);
	while(READBIT(UCSRA,UDRE) == 0);
	UDR=count;
}