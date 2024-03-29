/*
 * testiranje.h
 *
 * Created: 16/11/15 14:36:33
 *  Author: marko
 */ 


#ifndef TESTIRANJE_H_
#define TESTIRANJE_H_

char proveri_poziciju(void);
void nuliraj_poziciju_robota(void);
void zadaj_X_Y_teta(signed long x, signed long y, signed long teta_des, unsigned char dir);
void zadaj_X_Y(signed long x, signed long y, unsigned char dir);
void zadaj_teta(signed long teta_des, unsigned char dir);

void inicijalizuj_bluetooth();
void posalji_poruku_bt(char *poruka);
void posalji_karakter_bt(char c);

void inicijalizuj_servo_tajmer_20ms();
void pomeri_servo_1(uint16_t deg);

void demo_1(void);
void demo_2(void);
void demo_3(void);

#endif /* TESTIRANJE_H_ */