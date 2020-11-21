#include <stdio.h>

int main() {
    const float pi = 3.14f;
    float raio = 0;
    float area = 0;
    float comprimento = 0;

    printf("Esse programa irá ler o valor do raio de uma circunferência e calcuar a sua área e comprimento.\n");
    printf("Digite o valor do raio: ");
    scanf("%f", &raio);

    area = pi * (raio * raio);
    comprimento = 2 * pi * raio;

    printf("Área: %f.\n", area);
    printf("Comprimento: %f.", comprimento);

    return 0;
}