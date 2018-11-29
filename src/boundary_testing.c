#include "unit_testing.c"


/*This function boundary tests the last 4 loops in unit_test.c and the else statement at the end of the file
 *Returns the number of errors that occured during testing and also prints the results of each test
 *Written by David Reti on 2018/11/28
 */
unsigned int boundaryTestLoop4
{
	
	unsigned int numErrors = 0;

	printf( "Boundary testing last 4 loops and else statement\n\n" );

	printf( "Testing upper limits:\n" );

	matrix_sum(3,3,3,3);	

	printf( "Testing lower limits:\n" );

	printf( "Testing middle values:\n" );

	printf( "Testing else statememt:\n" );

	printf( "Finished boundary testing last 4 loops and else statement\n\n" );

	return numErrors;

}
