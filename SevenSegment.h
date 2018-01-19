

#ifndef SEVENSEGMENT_H_
#define SEVENSEGMENT_H_

#include "stdmacros.h"
#include "TIMER0.h"

void Seven_Segment_init(void);
	#define EN1(x) (x==1)?SETBIT(PORTC,2):CLRBIT(PORTC,2);
	#define EN2(x) (x==1)?SETBIT(PORTC,3):CLRBIT(PORTC,3);
	#define SEG4(x) (x==1)?SETBIT(PORTC,4):CLRBIT(PORTC,4);
	#define SEG5(x) (x==1)?SETBIT(PORTC,5):CLRBIT(PORTC,5);
	#define SEG6(x) (x==1)?SETBIT(PORTC,6):CLRBIT(PORTC,6);
	#define SEG7(x) (x==1)?SETBIT(PORTC,7):CLRBIT(PORTC,7);
	#define POINT(x) (x==1)?SETBIT(PORTB,0):CLRBIT(PORTB,0);
	
void Seven_Segment_write(uint8_t);





#endif /* SEVENSEGMENT_H_ */