#include <stdio.h>
#include <stdlib.h>

int main() {
    char *palavra = NULL;
    size_t tamanho;
    size_t bytes = 0;

    printf("Esse programa ira ler uma palavra e calcular seu comprimento.\n");
    printf("Digite uma palavra:\n");
    
    tamanho = getline(&palavra, &bytes, stdin);
    tamanho = tamanho - 1;

    printf("O comprimento da palavra e de %zd caracteres.", tamanho);

    return 0;
}