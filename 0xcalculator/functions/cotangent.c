#include "calc.h"

/**
 * cotangent: Function to give the cotangent of any given value
 *
 * @n: Value whose cotangent is being found
 *
 * return(Deg): Value returned at the end of the program
 */

double cotangent(double n){
	double rad = n * PI / 180;
	double val = tan(rad);
	double cotangent = 1 / val;
	return(cotangent);
}

