/*
 *  Created on: Feb 19, 2014
 *      Author: Nelson Antonio Pérez Cervantes
 */
#include "derivative.h"
#include "cfgps2.h"
#include "lcd.h"
#include "Keyboard.h"

void bloq_mayus(void)
{
	if ((teclado == 0x58) && (mayus==0))
	{
		if ((data_ready) && (data != 0xF0))
			{
			teclado = data;
			data_ready = 0;
			}
		if ((teclado == 0x58) && (mayus==0))
		{
			mayus = 1;
		}
	}
	else if((teclado == 0x58) && (mayus==1))
	{
		if ((data_ready) && (data != 0xF0))
		{
			teclado = data;
			data_ready = 0;
		}
		if ((teclado == 0x58) && (mayus==1))
		{
			mayus = 0;
		}
	}
}
void shif_use(void)
{
	if (((data == 0x12) || (data == 0x59)) && (mayus==0))
	{
		mayus = 1;
	}
	else if (((data == 0x12) || (data == 0x59)) && (mayus==1))
	{
		mayus = 0;
	}
}
void writeLCD(int letra)
{
	memory++;
	if (memory == 2)
	{
		sendCode(nData,letra);
		memory = 0;
	}
}

void teclado_use(void)
{
	if ((data_ready))
				{
				teclado = data;
				data_ready = 0;
				}
	
	if (teclado != 0xF0)
	{
		switch (teclado)
		{
		case 0x15:
			writeLCD('q');
			break;
		case 0x1D:
			writeLCD('w');
			break;
		case 0x24:
			writeLCD('e');
			break;
		case 0x2D:
			writeLCD('r');
			break;
		case 0x2C:
			writeLCD('t');
			break;
		case 0x35:
			writeLCD('y');
			break;
		case 0x3C:
			writeLCD('u');
			break;
		case 0x43:
			writeLCD('i');
			break;	
		case 0x44:
			writeLCD('o');
			break;
		case 0x4D:
			writeLCD('p');
			break;
		case 0x1C:
			writeLCD('a');
			break;
		case 0x1B:
			writeLCD('s');
			break;
		case 0x23:
			writeLCD('d');
			break;
		case 0x2B:
			writeLCD('f');
			break;
		case 0x34:
			writeLCD('g');
			break;
		case 0x33:
			writeLCD('h');
			break;
		case 0x3B:
			writeLCD('j');
			break;
		case 0x42:
			writeLCD('k');
			break;
		case 0x4B:
			writeLCD('l');
			break;
		case 0x1A:
			writeLCD('z');
			break;
		case 0x22:
			writeLCD('x');
			break;
		case 0x21:
			writeLCD('c');
			break;
		case 0x2A:
			writeLCD('v');
			break;
		case 0x32:
			writeLCD('b');
			break;
		case 0x31:
			writeLCD('n');
			break;
		case 0x3A:
			writeLCD('m');
			break;
		case 0x00:
			break;
		default: 
			writeLCD('B');
			break;
		}
	}
}

