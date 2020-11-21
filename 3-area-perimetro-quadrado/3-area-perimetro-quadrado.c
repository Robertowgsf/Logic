#include <stdio.h>

int main() {
    int lado = 0;
    int area = 0;
    int perimetro = 0;

    printf("Esse programa irá ler o valor do lado de um quadrado e calcular sua área e perímetro.\n");
    printf("Digite o valor do lado do quadrado: ");
    scanf("%d", &lado);

    area = lado * lado;
    perimetro = lado * 4;
    
    printf("A área é %d.\n", area);
    printf("O perímetro é %d.", perimetro);

    return 0;
}