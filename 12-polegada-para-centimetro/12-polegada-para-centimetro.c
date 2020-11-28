#include <stdio.h>

int main() {
    float polegadas = 0;
    float polegadasEmCentimetros = 2.54;
    float centimetros = 0;

    printf("Esse programa ira ler um valor em polegadas e o converter para centímetros.\n");
    printf("Digite o valor em polegadas: ");
    scanf("%f", &polegadas);

    centimetros = polegadas * polegadasEmCentimetros;

    printf("O valor informado em centimetros equivale a: %f", centimetros);

    return 0;
}