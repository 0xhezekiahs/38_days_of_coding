#include "calc.h"

/**
 * cosec - compute the cosecant valu for a given angle
 * @n: input angle
 *
 * Return: cosecant value
 */
double cosec(double n);
{
	double cosecant;
	double sine = sine(double n);

	cosecant = 1 / sine;

	return (cosecant);
}
