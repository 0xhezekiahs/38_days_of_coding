#include "calc.h"

#define PI 3.142

/**
 * cot: Function to find the cotangent of any given value
 *
 *@num: Number whose cotangent is to be found
 *
 * return(result): Value returned at the end of the program
 */

double cot(double num){
	double val = num * PI/180;
	double number = tan(val);
	double result = 1/number;
	
	return(result);
}	
