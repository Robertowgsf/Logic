#include <stdio.h>

int main() {
    float base = 0;
    float altura = 0;
    float area = 0;

    printf("Esse programa irá ler o valor da base e da altura de um triangulo e calcular sua area.\n");
    printf("Digite o valor da base: ");
    scanf("%f", &base);
    printf("Digite o valor da altura: ");
    scanf("%f", &altura);

    area = (base * altura) / 2;

    printf("A area e: %f", area);

    return 0;
}