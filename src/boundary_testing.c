#include<stdio.h>
#include<stdlib.h>
#include "unit_testing.h"

/*This function boundary tests the last 4 loops in unit_test.c and the else statement at the end of the file
 *Returns the number of errors that occured during testing and also prints the results of each test
 *Written by David Reti on 2018/11/28
 */
unsigned int boundaryTestLoop4()
{
	
	unsigned int numErrors = 0;
	unsigned int* testResults;

	printf( "Boundary testing last 4 loops\n\n" );

	printf( "Testing upper limits:\n\n" );	

	//Test setting loops to lower bounds, run with matrices all of size 0
	printf( "Test 1: running function with matrices all of size 512\nExpected: all loops run 0 times\n" );
	testResults = last4loops( 512, 512, 512, 512 );
	printf( "Result: loop 1 ran %d times, loop 2 ran %d times, loop 3 ran %d times, loop 4 ran %d times\n", testResults[0], testResults[1], testResults[2], testResults[3] );

	if( testResults[0] == 512 && testResults[1] == 262144 && testResults[2] == 512 && testResults[3] == 262144 )
	{
		printf( "Test Passed\n" );
	}
	else
	{
		printf( "Test Failed\n" );
		numErrors++;
	}

	printf( "Testing lower limits:\n\n" );

	//Test setting loops to lower bounds, run with matrices all of size 0
	printf( "Test 2: running function with matrices all of size 0\nExpected: all loops run 0 times\n" );
	testResults = last4loops( 0, 0, 0, 0 );
	printf( "Result: loop 1 ran %d times, loop 2 ran %d times, loop 3 ran %d times, loop 4 ran %d times\n\n", testResults[0], testResults[1], testResults[2], testResults[3] );

	if( testResults[0] == 0 && testResults[1] == 0 && testResults[2] == 0 && testResults[3] == 0 )
	{
		printf( "Test Passed\n" );
	}
	else
	{
		printf( "Test Failed\n" );
		numErrors++;
	}

	//Test setting loops out of lower bounds, run with matrices all of size -1
	printf( "Test 3: running function with matrices all of size -1\nExpected: all loops run 0 times\n" );
	testResults = last4loops( -1, -1, -1, -1 );
	printf( "Result: loop 1 ran %d times, loop 2 ran %d times, loop 3 ran %d times, loop 4 ran %d times\n\n", testResults[0], testResults[1], testResults[2], testResults[3] );

	if( testResults[0] == 0 && testResults[1] == 0 && testResults[2] == 0 && testResults[3] == 0 )
	{
		printf( "Test Passed\n" );
	}
	else
	{
		printf( "Test Failed\n" );
		numErrors++;
	}

	printf( "Testing middle values:\n\n" );

	//Test middle / average loop values, just to make sure the loops actually run correctly
	printf( "Test 4: running function with middle values, matrices size 3 x 3\nExpected: loops 1 & 3 run 3 times\n          loops 2 & 4 run 9 times\n" );
	testResults = last4loops( 3, 3, 3, 3 );
	printf( "Result: loop 1 ran %d times, loop 2 ran %d times, loop 3 ran %d times, loop 4 ran %d times\n\n", testResults[0], testResults[1], testResults[2], testResults[3] );

	if( testResults[0] == 3 && testResults[1] == 9 && testResults[2] == 3 && testResults[3] == 9 )
	{
		printf( "Test Passed\n" );
	}
	else
	{
		printf( "Test Failed\n" );
		numErrors++;
	}

	free( testResults );

	printf( "Finished boundary testing last 4 loops\n\n" );
	printf( "Total errors: %u\n", numErrors );

	return numErrors;

}
