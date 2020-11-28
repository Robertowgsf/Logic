#include <stdio.h>
#include <math.h>

int main() {
    float cateto1 = 0;
    float cateto2 = 0;
    float hipotenusa = 0;

    printf("Esse programa ira ler o valor de dois catetos e calcular a hipotenusa de um triangulo.\n");
    printf("Digite o valor do primeiro cateto: ");
    scanf("%f", &cateto1);
    printf("Digite o valor do segundo cateto: ");
    scanf("%f", &cateto2);

    hipotenusa = sqrt((cateto1 * cateto1) + (cateto2 * cateto2));

    printf("O valor da hipotenusa eh: %f", hipotenusa);

    return 0;
}