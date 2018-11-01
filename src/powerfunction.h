#include <stdio.h>

/***
 * This function returns the number x to the power of n
 * @x TThe base number to raise to the power n
 * @n  The power to raise to base to
 * @return The number x raised to the power n, as a double
**/

//Last edited by David Reti, 10/04 at 7:52PM
double powerfn(double x, int n)
{

	int i;
	double result = 1;

	for( i = 1; i <= n; i++ ) {

		result *= x;

	}

	return result;

}

