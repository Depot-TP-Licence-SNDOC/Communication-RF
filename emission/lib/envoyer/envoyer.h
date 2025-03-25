#ifndef ENVOYER_H
#define ENVOYER_H

#include <Arduino.h>
#include <SoftwareSerial.h>

#define VITESSE_DE_TRANSMISSION 200
#define EN_TETE "SERRE"
#define SEPARATEUR ";"
#define UNITE_TEMPERATURE "C"
#define UNITE_HYGROMETRIE "%"
#define FIN_TRAME "\r\n"
#define ID_SERRE 1
#define RX 3
#define TX 1

void initialiserLiaisonSerie(u_int8_t rx = RX, u_int8_t tx = TX, u_int16_t vitesseDeTransmission = VITESSE_DE_TRANSMISSION);
SoftwareSerial mySerial (RX, TX);

void envoyerTrame(String trame);

String creerTrame();


#endif