#include <stdio.h>

int main() {
    float kb = 0;
    float bits = 0;
    float bytes = 0;
    float mb = 0;
    float gb = 0;

    printf("Esse programa ira ler um valor em KB e converter para Bits, Bytes, MB e GB.\n");
    printf("Digite o valor em KB: ");
    scanf("%f", &kb);

    bytes = kb * 1024;
    bits = bytes * 8;
    mb = kb / 1024;
    gb = mb / 1024;

    printf("%fKB equivale a %f bits, %f bytes, %fMB, %fGB", kb, bits, bytes, mb, gb);

    return 0;
}