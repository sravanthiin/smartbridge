/*
 * DCMOTOR BUTTON.c
 *
 * Created: 11-06-2019 11:06:59
 * Author : Mohit
 */ 

#include <avr/io.h>
#define F_CPU 16000000UL
#include <util/delay.h>
#include <stdlib.h>


int main(void)
{
   DDRD=0X00;
    while (1) 
    {
		if((PINB&(1<<PB0))==1)
		{
	    	PORTD|=(1<<PD0);
			_delay_ms(500);
			PORTD&=(1<<PD1);
			_delay_ms(500);
		}
		if((PINB&(1<<PB1))==0)
		 {
			 PORTD|=(1<<PD0);
			 _delay_ms(500);
			 PORTD&=~(1<<PD0);
			 _delay_ms(500);
		 }
	}
}