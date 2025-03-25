/**     // TO DO
 * @file main.cpp
 * @author your name
 * @brief Gestion du module ADC de la carte D1 R32
 * @version 0.1
 * @date 2023-11-17
 * 
 * @copyright Copyright (c) 2023
 * 
 */
//////////////////////////////////////////////////////////////////////

#include "envoyer.h"
String trame;

//////////////////////////////////////////////////////////////////////
void setup() {
   initialiserLiaisonSerie();
 }
//////////////////////////////////////////////////////////////////////
void loop() {
  trame = creerTrame();
  envoyerTrame(trame);
}