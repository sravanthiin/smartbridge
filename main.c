/*
 * DCMOTOR1.c
 *
 * Created: 11-06-2019 10:52:42
 * Author : Mohit
 */ 

#include <avr/io.h>
#define F_CPU 16000000UL
#include<util/delay.h>
#include<stdlib.h>


int main(void)
{
    DDRD=0X00;
	while(1)
	{
		PORTD=0X01;
		_delay_ms(800);
		PORTD=0X02;
		PORTD=0X00;
		_delay_ms(800);
	}
	
}

