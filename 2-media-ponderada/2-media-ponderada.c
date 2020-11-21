#include <stdio.h>

int main()  {
    int numberAmount = 3;
    float weightedNumbersSum = 0;
    float weightSum = 0;
    float weightedAverage = 0;

    printf("Esse programa irá calcular a média ponderada de %d números.\n", numberAmount);

    for (int i = 1; i <= numberAmount; i++) {
        float providedNumber = 0;
        float providedWeight = 0;

        printf("Digite o %dº número: ", i);
        scanf("%f", &providedNumber);
        printf("Digite o peso do %dº número: ", i);
        scanf("%f", &providedWeight);

        weightedNumbersSum += providedNumber * providedWeight;
        weightSum += providedWeight;
    }

    weightedAverage = weightedNumbersSum / weightSum;

    printf("A média ponderada dos números fornecidos é: %f", weightedAverage);

    return 0;
}