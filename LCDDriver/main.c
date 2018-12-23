/*
 * LCDDriver.c
 *
 * Created: 12/22/2018 8:00:47 AM
 * Author : user
 */ 
#include "Main.h"
#include <avr/io.h>
#include <util/delay.h>

#include "LCD.h"

int main(void)
{
	LCD_vInit();
	LCD_vMoveCursir(1,4);
	LCD_vPrintString("Yara");
    /* Replace with your application code */
    while (1) 
    {
		
    }
}

