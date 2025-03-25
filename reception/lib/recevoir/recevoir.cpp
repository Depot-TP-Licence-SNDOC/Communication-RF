#include "recevoir.h"

void initialiserLiaisonSerie(u_int8_t vitesseLiaisonSerie)
{
    Serial.begin(vitesseLiaisonSerie);
}

String lirePortSerie()
{
    String trame;
    if (Serial.available() > 0)
    {
        trame = Serial.read();
    }
    return trame;
}

void afficherTrame(String trameRecu)
{
    Serial.print(trameRecu);
}