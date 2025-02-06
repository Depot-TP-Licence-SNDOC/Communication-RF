#include "transmettre.h"


///////////////////////////////////////////////////////////////////////////////

void initialiserLiaisonSerie(unsigned int vitesse){
  Serial.begin(vitesse);
}


void envoyerTrame(String trame){ //Affichage des differentes chaines de caracteres qui constituent la trame
  Serial.print(trame);
}

void attendre(unsigned int delais){
  delay(delais);
}

String contruireTrame(u_int16_t valeurADC, u_int8_t anglePotentiometre, u_int8_t variationPotentiometre, u_int32_t valeurADCEnMillivolt){
  String trame = "Position : " + anglePotentiometre + "Variation : " +variationPotentiometre + " %" + "Tension : " + valeurADCEnMillivolt + " mV " + "Valeur ADC : " + valeurADC + " \n";
}
