/*
 * potentiometer.c
 *
 * Created: 10-06-2019 14:54:33
 * Author : Mohit
 */ 

#include<avr/io.h>
#include F_CPU 1000000UL
#include<util/delay.h>
#include<stdilb.h>

#define enable 5
#define registerselection 7

void send_a_command(unsigned char command);
void send_a_character(unsigned char character);
void send_a_string(char*string_of_character);

int main(void)
{
	DDRC=0XFF;
	DDRA=0X00;
	DDRD=
}