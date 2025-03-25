#include "envoyer.h"

void initialiserLiaisonSerie(u_int8_t vitesseDeTransmission)
{
    Serial.begin(vitesseDeTransmission);
}

void envoyerTrame(String trame)
{
    Serial.print(trame);
}

u_int8_t identificateurDeTrame = 0;

String creerTrame(u_int8_t identificateurDeTrame, float temperature, float hygrometrie)
{
    identificateurDeTrame = identificateurDeTrame + 1;
    temperature = random(20,30);
    hygrometrie = random(40,60);
    String trame = EN_TETE + SEPARATEUR + identificateurDeTrame + SEPARATEUR + ID_SERRE + SEPARATEUR + temperature + SEPARATEUR +UNITE_TEMPERATURE + SEPARATEUR + hygrometrie + SEPARATEUR + UNITE_HYGROMETRIE + FIN_TRAME;
    return trame;
}