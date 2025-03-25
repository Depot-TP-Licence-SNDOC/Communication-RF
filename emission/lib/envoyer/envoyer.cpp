#include "envoyer.h"

void initialiserLiaisonSerie(u_int8_t rx, u_int8_t tx, u_int16_t vitesseDeTransmission)
{
    pinMode(rx, INPUT);
    pinMode(tx, OUTPUT);
    mySerial.begin(vitesseDeTransmission);
}

void envoyerTrame(String trame)
{
    mySerial.print(trame);
}

u_int8_t identificateurDeTrame = 0;
float temperature = 0.0;
float hygrometrie = 0.0;

String creerTrame()
{
    identificateurDeTrame = identificateurDeTrame + 1;
    temperature = random(20,30);
    hygrometrie = random(40,60);
    String trame = EN_TETE + SEPARATEUR + identificateurDeTrame + SEPARATEUR + ID_SERRE + SEPARATEUR + temperature + SEPARATEUR +UNITE_TEMPERATURE + SEPARATEUR + hygrometrie + SEPARATEUR + UNITE_HYGROMETRIE + FIN_TRAME;
    return trame;
}