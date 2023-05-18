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
	double result;

	if (a <= 0)
	{
		result = b + a;
	}
	else if (b <= 0)
	{
		result = a + b;
	}
	else
	{
		result = a + b;
	}
	return (result);
}
