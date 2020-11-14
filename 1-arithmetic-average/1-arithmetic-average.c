#include <stdio.h>

int main() {
    int sum = 0;
    int amount;
    int average;
    
    printf("This program will calculate an arithmetic average of the provided numbers.\n");
    printf("Enter the amount of numbers you will input: ");
    scanf("%d", &amount);

    for (int i = 1; i <= amount; i++) {
        int providedNumber;
        
        printf("Enter the %dº number: ", i);
        scanf("%d", &providedNumber);
        
        sum += providedNumber;
    }

    average = sum / amount;
    
    printf("The arithmetic average of the provided numbers is: %d", average);
    
    return 0;
}