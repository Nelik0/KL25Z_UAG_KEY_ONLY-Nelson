//cfgps2.h

#ifndef cfgps2_H_
#define GPIO_PIN_MASK 0x1Fu 
#define GPIO_PIN(x) (((1)<<(x & GPIO_PIN_MASK)))
	

void cfgPortPS2(void);
void reading(void);
int d, n, data, clk;
int data_ready;
int start_trama;
int d0, d1, d2, d3, d4, d5, d6, d7, d8, d9, d10;
int data_bit;
#endif /* cfgps2_H_ */
