#include <stdio.h>
#include <math.h>

int main() {
    int numero = 0;
    int dobro = 0;
    int triplo = 0;
    int quadrado = 0;
    float raizQuadrada = 0;
    
    printf("Esse programa irá ler um número inteiro positivo e calcular o seu dobro, triplo, quadrado, e raiz quadrada.\n");
    printf("Digite um número: ");
    scanf("%d", &numero);

    dobro = numero * 2;
    triplo = numero * 3;
    quadrado = numero * numero;
    raizQuadrada = sqrt(numero);

    printf("Drobo: %d\n", dobro);
    printf("Triplo: %d\n", triplo);
    printf("Quadrado: %d\n", quadrado);
    printf("Raiz quadrada: %f\n", raizQuadrada);
    
    return 0;
}