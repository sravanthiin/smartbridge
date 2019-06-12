/*
 * buzzer.c
 *
 * Created: 11-06-2019 22:37:36
 * Author : Mohit
 */ 


#include <avr/io.h>
#define F_CPU 1000000UL
#include<util/delay.h>
#include<stdlib.h>
#define E5
#define RS 7
void send_a_command(unsigned char command);
void send_a_character(unsigned char character);
void send_a_string(char*string_of_character);

int main(void)
{
	DDRC=0XFF;
	DDRA=0X00;
	DDRD=0XFF;
	_delay_ms(50);
	ADMUX|=(1<<REFS0)|(1<<REFS1);
	ADCSRA|=(1<<ADEN)|(1<<ADATE)|(1<<ADPS0)|(1<<ADPS1)|(1<<ADPS2);
	int COUNTA=0;
	char SHOWA[3];
	send_a_command(0x01);
	_delay_ms(50);
	send_a_command(0x38);
	
	while (1)
	{
	}
}

