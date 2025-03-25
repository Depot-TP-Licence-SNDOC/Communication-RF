#ifndef ENVOYER_H
#define ENVOYER_H

#include <Arduino.h>

#define VITESSE_DE_TRANSMISSION 9600
#define EN_TETE "SERRE"
#define SEPARATEUR ";"
#define UNITE_TEMPERATURE "C"
#define UNITE_HYGROMETRIE "%"
#define FIN_TRAME "\r\n"
#define ID_SERRE 1


void initialiserLiaisonSerie(u_int8_t vitesseDeTransmission = VITESSE_DE_TRANSMISSION);

void envoyerTrame(String trame);

String creerTrame();


#endif