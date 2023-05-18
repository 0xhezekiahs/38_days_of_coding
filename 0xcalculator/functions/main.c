#include <stdio.h>
#include "calc.h"

int sum;

int main() {
    double num1, num2, sum;
    
    printf("enter the first number: ");
    scanf("%if", &num1);
    
    printf("enter the second number: ");
    scanf("%if", &num1);
    
    sum = num1 + num2;
    
    printf("The sum of the two numbers is: %if", sum );
    return 0;
}
