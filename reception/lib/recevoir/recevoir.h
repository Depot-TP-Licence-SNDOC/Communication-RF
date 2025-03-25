#ifndef RECEVOIR_H
#define RECEVOIR_H

#include <Arduino.h>
#define VITESSE_DE_TRANSMISSION 9600

void intialiserLiaisonSerie(u_int8_t vitesseDeTransmission = VITESSE_DE_TRANSMISSION);

String lirePortSerie();

void afficherTrame(String trameRecu);

#endif 