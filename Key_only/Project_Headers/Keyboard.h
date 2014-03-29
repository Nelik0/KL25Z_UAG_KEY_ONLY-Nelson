//cfgps2.h

#ifndef cfgps2_H_
#define GPIO_PIN_MASK 0x1Fu 
#define GPIO_PIN(x) (((1)<<(x & GPIO_PIN_MASK)))
	

void bloq_mayus(void);
void shif_use(void);
void teclado_use(void);
void writeLCD(int letra);
int mayus;
int teclado;
int memory;
#endif /* cfgps2_H_ */
