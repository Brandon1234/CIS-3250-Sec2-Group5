#include <stdio.h>
#include <stdint.h>
/*changelog

cleaned up a bit, adding spaces and to make things easier to read
added comments to explain things
that's about it really...
*///Last Edited by Alexander Kim 31/10/2018 7:49PM

unsigned long long int fact(int n) {/*Factorial function inefficient for values after 20*/
	
	//variable declaration
	unsigned long long int fact;
	int i;

	fact=1;

	//factorials works simply as: fact(3) = 1 * 2 * 3 or fact(8) = 1 * 2 * 3 * 4 * 5 * 6 * 7 * 8
	for( i = n; i > 0; i-- ){

		//same as doing fact = fact * i
		fact *= i;

	}
		
	return fact;

}//unsigned long long int fact

