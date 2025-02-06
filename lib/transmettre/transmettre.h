#ifndef TRANSMETTRE_H
#define TRANSMETTRE_H

#include <Arduino.h>
#include <string.h>

#define NOMBRE_DE_DECIMALE          //TO DO
#define VITESSE_TRANSMISSION 9600
//////////////////////////////////////////////////

void initialiserLiaisonSerie(unsigned int vitesse = VITESSE_TRANSMISSION);

void envoyerTrame(String trame);

void attendre(unsigned int delais);

String contruireTrame(u_int16_t valeurADC, u_int8_t anglePotentiometre, u_int8_t variationPotentiometre, u_int32_t valeurADCEnMillivolt);


#endif  //TRANSMETTRE_H
