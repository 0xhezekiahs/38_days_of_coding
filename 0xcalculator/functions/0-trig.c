#include "calc.h"

#define PI 3.14

/**
 * sin - compute sin of a given angle
 * @n: angle
 *
 * Return: sine
 */
double sin(double n)
{
	double rad = n * PI / 180;
	double sine = sin(rad);

	return (sine);
}

/**
 * cos - compute the cosine of a given angle
 * @n: angle
 *
 * Return: cos
 */
double cos(double n)
{
	double rad = n * PI / 180;
	double cosine = cos(rad);

	return (cosine);
}

/**
 * tan - compute the tan of a given angle
 * @n: angle
 *
 * Return: tan
 */
double tan(double n)
{
	double rad = n * PI / 180;
	double tan = tan(rad);

	return (tan);
}
