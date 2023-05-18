#include "calc.h"

/**
 * sum - add up two integers
 * @a: first number
 * @b: second number
 *
 * Return: the sum of a and b
 */
double sum(double a, double b)
{
	if (a <= 0)
	{
		sum = b + a;
	}
	else if (b <= 0)
	{
		sum = a + b;
	}
	else
	{
		sum = a + b;
	}
	return (sum);
}
