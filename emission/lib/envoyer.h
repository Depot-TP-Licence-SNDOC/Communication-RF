#ifndef ENVOYER_H
#define ENVOYER_H

#include <Arduino.h>

#define VITESSE_DE_TRANSMISSION 9600

void initialiserLiaisonSerie(u_int8_t vitesseDeTransmission = VITESSE_DE_TRANSMISSION);

void envoyerTrame(String trame);


#endif