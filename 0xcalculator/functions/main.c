#include <stdio.h>
#include "calc.h"

int main() {
    double num1, num2, sum;
    
    printf("Enter the first number: ");
    if (scanf("%lf", &num1) != 1) {
        printf("Invalid input. Please enter a numeric value.\n");
        return 1;
    }

    printf("Enter the second number: ");
    if (scanf("%lf", &num2) != 1) {
        printf("Invalid input. Please enter a numeric value.\n");
        return 1;
    }
    
    return 0;
}
