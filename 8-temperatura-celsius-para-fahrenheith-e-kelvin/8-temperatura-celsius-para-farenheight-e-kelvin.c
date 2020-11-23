#include <stdio.h>

int main() {
    float celsius = 0;
    float fahrenheit = 0;
    float kelvin = 0;

    printf("Esse programa irá ler o valor de uma temperatura em Celsius e converte-la para a escala Fahrenheit e Kelvin.\n");
    printf("Digite uma temperatura em Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (1.8 * celsius) + 32;
    kelvin = celsius + 273;

    printf("O valor da temperatura em Fahrenheit eh: %f.\nO valor da temperatura em Kelvin eh: %f.", fahrenheit, kelvin);
    
    return 0;
}