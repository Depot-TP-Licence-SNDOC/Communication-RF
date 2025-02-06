#include "voltmetre.h"

void initialiserBroche(u_int8_t numeroBroche)
{
    pinMode(numeroBroche, INPUT);
}

void configurerADC()
{
    esp_err_t adc1_config_width(adc_bits_width_t width_12);
    esp_err_t adc1_config_channel_atten(adc1_channel_t 1, adc_atten_t 0);
    esp_err_t adc1_vref_to_gpio(gpio_num_t BROCHE_POTENTIOMETRE);
}

u_int16_t lireValeurPotentiometre(u_int8_t numeroBroche)
{
    u_int16_t valeurPotentiometre = analogRead(numeroBroche);
    return valeurPotentiometre;
}

u_int32_t convertirValeurEnVolt(u_int8_t valeurPotentiometre)
{
    u_int32_t valeurEnMillivolt = valeurPotentiometre * 3300 / 4095;
    return valeurEnMillivolt;
}

u_int8_t convertirValeurEnAngle(u_int32_t valeurPotentiometre)
{
    
}
