#include <stdio.h>
#include "calc.h"

int main(void)
{
	double num1, num2, result;

	printf("Enter the first number: ");
	scanf("%lf", &num1);
	printf("Enter the second number: ");
	scanf("%lf", &num2);

	result = mul(num1, num2);

	printf("The sum of the two numbers is: %lf\n", result);

	return (0);
}
