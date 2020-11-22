#include <stdio.h>

int main() {
    int numero = 0;

    printf("Esse programa irá ler um número inteiro e informar seu sucessor e antecessor.\n");
    printf("Digite um número: ");
    scanf("%d", &numero);

    int sucessor = numero + 1;
    int antecessor = numero - 1;

    printf("Sucessor: %d\n", sucessor);
    printf("Antecessor: %d", antecessor);

    return 0;
}