/*
 * main implementation: use this 'C' sample to create your own application
 *
 */





#include "derivative.h" /* include peripheral declarations */
#include "lcd.h"
#include "cfgps2.h"
#include "Keyboard.h"

int main(void)
{
	cfgPortPS2();
	cfgPortsLCD();
	sendCode (nIns,0x80);
	teclado = 0;
	memory = 0; 
	sendCode (nIns,0x0F);
	for(;;) 
	{	
		if ((data_ready) && (data != 0xF0))
		{
		teclado = data;
		data_ready = 0;
		}
		else 
		{
			teclado = 0;
		}
		teclado_use();
	}
	
	return 0;
}
