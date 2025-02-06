#ifndef VOLTMETRE_H
#define VOLTMETRE_H

#include <Arduino.h>

#define BROCHE_POTENTIOMETRE 36
#define ENTREE INPUT

void initialiserBroche(u_int8_t numeroBroche = BROCHE_POTENTIOMETRE);

void configurerADC();

u_int16_t lireValeurPotentiometre(u_int8_t numeroBroche = BROCHE_POTENTIOMETRE);

u_int32_t convertirValeurEnMillivolt(u_int8_t valeurPotentiometre);

u_int8_t convertirValeurEnAngle(u_int8_t valeurPotentiometre);

u_int8_t convertirValeurEnVariation(u_int8_t valeurPotentiometre);

#endif  // VOLTMETRE_H