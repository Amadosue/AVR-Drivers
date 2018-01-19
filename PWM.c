
#include "PWM.h"

void PWM_OCR1A_init()
{
	SETBIT(TCCR1A,COM1A1);
	SETBIT(TCCR1A,WGM10);
	SETBIT(TCCR1A,WGM11);
	SETBIT(TCCR1B,WGM12);
	SETBIT(TCCR1B,CS10);
	SETBIT(DDRD,DDD5);
}

void PWM_OCR1A_duty(uint8_t data)
{
	OCR1A = (float)(data*1023)/(float)(100);
}

void PWM_OCR1B_init()
{
	SETBIT(TCCR1A,COM1B1);
	SETBIT(TCCR1A,WGM10);
	SETBIT(TCCR1A,WGM11);
	SETBIT(TCCR1B,WGM12);
	SETBIT(TCCR1B,CS10);
	SETBIT(DDRD,DDD4);
}


void PWM_OCR1B_duty(uint8_t data)
{
	OCR1B = (float)(data*1023)/(float)(100);
}

