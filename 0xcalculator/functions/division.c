#include "calc.h"

/**
 * diff - calculates the division of two numbers
 * @a: first number
 * @b: second number
 * @error: for error handling
 *
 * Return: the division of a and b
 */

double divide(double a, double b, int *error) {
    if (b != 0) {
        *error = 0;  // Set error indicator to 0 (no error)
        return a / b;  // Perform the division operation
    } else {
        *error = 1;  // Set error indicator to 1 (division by zero error)
        return 0.0;  // Return a default value to handle the error case
    }
}
