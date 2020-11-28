#include <stdio.h>

int main() {
    float valorReal = 0;
    float cotacaoDolar = 0;
    float valorDolar = 0;
    printf("Esse programa ira ler um valor em real, a cotacao atual do dolar e converter o valor para dolar.\n");
    printf("Digite um valor em real: ");
    scanf("%f", &valorReal);
    printf("Digite a cotacao atual do dolar: ");
    scanf("%f", &cotacaoDolar);

    valorDolar = valorReal / cotacaoDolar;

    printf("O valor informado em dolar equivale a: %f", valorDolar);

    return 0;
}