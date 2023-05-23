#include "calc.h"

#define PI 3.14

/**
 * sinInv - compute the sine inverse of a given value
 * @n: value
 *
 * Return: angle in degrees
 */
double sinInv(double n)
{
	double Rad = asine(n);
	double Deg = Rad * 180 / PI;

	return (Deg);
}

/**
 * cosInv - computes the cosine inverse of a given value
 * @n: values
 *
 * Return: angle in degrees
 */
double cosInv(double n)
{
	double Rad = acos(n);
	double Deg = Rad * 180 / PI;

	return (Deg);
}

/**
 * tanInv - compute the tan inverse of a given value
 * @n: value
 *
 * Return: angle in degrees
 */
double tanInv(double n)
{
	double Rad = atan(n);
	double Deg = Rad * 180 / PI;

	return (Deg);
}
