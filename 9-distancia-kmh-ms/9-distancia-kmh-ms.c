#include <stdio.h>

int main() {
    float distancia = 0;
    float tempoEmHoras = 0;
    float tempoEmMinutos = 0;
    float velocidadeMedia = 0;

    printf("Esse programa ira ler o valor de uma distancia percorrida em km e o tempo gasto, e calcular a velocidade media em m/s.\n");
    printf("Digite a distancia percorrida em km: ");
    scanf("%f", &distancia);
    printf("Digite o tempo gasto em horas: ");
    scanf("%f", &tempoEmHoras);

    tempoEmMinutos = tempoEmHoras * 60;
    velocidadeMedia = (distancia / tempoEmMinutos) / 3.6;

    printf("A velocidade media em m/s eh: %f", velocidadeMedia);

    return 0;
}