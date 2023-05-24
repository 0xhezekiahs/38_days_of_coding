#ifndef CALC_H
#define CALC_H

#include <math.h>

/* Basic arithmetic functions */

double sum(double a, double b);
double diff(double a, double b);
double mul(double a, double b);
double div(double a, double b);

/* Power and roots */

double square(double a);
double sq_root(double a);
double cube(double n);
double cuberoot(double n);

/*Trigonometric functions*/
double sin(double n);
double cos(double n);
double tan(double n);
double sineInv(double n);
double cosInv(double n);
double tanInv(double n);
#endif
