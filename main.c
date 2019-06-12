/*
 * DCMOTOR.c
 *
 * Created: 11-06-2019 10:31:12
 * Author : Mohit
 */ 

#include<avr/io.h>
#define F_CPU 16000000
#include<util/delay.h>
#include<stdlib.h>


int main(void)
{
	DDRD=0XFF;
	while(1)
	{
		PORTB=0X01;
		_delay_ms(800);
		PORTB=0X02;
		_delay_ms(800);
	}
}