
#include "SevenSegment.h"

void Seven_Segment_init(void)
{
	//Output pins for 7Segment
	SETBIT(DDRC,4);
	SETBIT(DDRC,5);
	SETBIT(DDRC,6);
	SETBIT(DDRC,7);
	
	//Enable 7Segment
	SETBIT(DDRC,2);
	SETBIT(DDRC,3);
	
	//Decimal Point
	SETBIT(DDRB,0);


}

void Seven_Segment_write(uint8_t number)
{
	uint8_t number1=(number%10);
	
	SEG4(READBIT(number1,0));
	SEG5(READBIT(number1,1));
	SEG6(READBIT(number1,2));
	SEG7(READBIT(number1,3));
	EN2(0);
	EN1(1);
	
	_delay_ms(1);
	uint8_t number2=(number/10);
	SEG4(READBIT(number2,0));
	SEG5(READBIT(number2,1));
	SEG6(READBIT(number2,2));
	SEG7(READBIT(number2,3));
	EN1(0);
	EN2(1);
	_delay_ms(1);
}