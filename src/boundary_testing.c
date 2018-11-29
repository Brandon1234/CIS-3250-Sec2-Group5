#include "unit_testing.c"

/*This function boundary tests the last 4 loops in unit_test.c and the else statement at the end of the file
 *Returns the number of errors that occured during testing and also prints the results of each test
 *Written by David Reti on 2018/11/28
 */
unsigned int boundaryTestLoop4()
{
	
	unsigned int numErrors = 0;
	unsigned int* testResults;

	printf( "Boundary testing last 4 loops and else statement\n\n" );

	printf( "Testing upper limits:\n\n" );	

	printf( "Testing lower limits:\n\n" );

	//Test setting loops to lower bounds, run with matrices all of size 0
	printf( "Test 1: running function with matrices all of size 0\nExpected: all loops run 0 times\n" );
	testResults = last4loops( 0, 0, 0, 0 );
	printf( "Result: loop 1 ran %d times, loop 2 ran %d times, loop 3 ran %d times, loop 4 ran %d times\n", testResults[0], testResults[1], testResults[2], testResults[3]);

	if(testResults[0] == 0 && testResults[1] == 0 && testResults[2] == 0 && testResults[3] == 0)
	{
		printf("Test Passed\n");
	}
	else
	{
		printf("Test Failed\n");
		numErrors++;
	}

	free(testResults);

	//Test setting loops out of lower bounds, run with matrices all of size -1
	printf( "Test 1: running function with matrices all of size -1\nExpected: all loops run 0 times\n" );
	testResults = last4loops( -1, -1, -1, -1 );
	printf( "Result: loop 1 ran %d times, loop 2 ran %d times, loop 3 ran %d times, loop 4 ran %d times\n", testResults[0], testResults[1], testResults[2], testResults[3]);

	if(testResults[0] == 0 && testResults[1] == 0 && testResults[2] == 0 && testResults[3] == 0)
	{
		printf("Test Passed\n");
	}
	else
	{
		printf("Test Failed\n");
		numErrors++;
	}

	free(testResults);

	printf( "Testing middle values:\n\n" );

	/*
	printf( "Testing else statememt:\n" );
	
	testResults = last4loops( 1, 1, 1, 1 );
	free(testResults);

	testResults = last4loops( 1, 1, 2, 2 );
	free(testResults);
	*/

	printf( "Finished boundary testing last 4 loops and else statement\n\n" );

	return numErrors;

}
