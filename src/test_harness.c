#include <stdio.h>
#include <stdlib.h>
#include "unit_testing.h"
#include "unit_testing.c"

#include <stdio.h>

float h[10000][10000];
float g[10000][10000];
float f[10000][10000];

int test_matrix(int matrix1Rows, int matrix1Cols, int matrix2Rows, int matrix2Cols) {
    
    int i, j;
    
    //gets the values for each row of matrix 1
    for (i = 0; i < matrix1Rows; i++){
        for (j = 0; j < matrix1Cols; j++){
            
            h[i][j] = 1;
            
        }
    }
    
    //gets the values for each row of matrix 2
    for (i = 0; i < matrix2Rows; i++){
        
        for (j = 0; j < matrix2Cols; j++){
            
            g[i][j] = 1;
            
        }
    }
    
    //using matrix addition, adds each row and column value together to get a new matrix
    for (i = 0; i < matrix1Rows; i++){
        for (j = 0; j < matrix1Cols; j++){
            
            f[i][j]=h[i][j]+g[i][j];
            if (f[i][j] != 2) {
                return 0;
            }
            
        }
    }
    
    printf("TEST PASSED\n");
    
    return 1;
    
}

int dataflow_zeros_test() {
    
    printf("TEST: matrix w/ 0 rows and 0 columns\n");
    
    return test_matrix(0, 0, 0, 0);
    
}

int dataflow_1000_test() {
    
    printf("TEST: matrix w/ 1000 rows and 1000 columns\n");
    
    return test_matrix(1000, 1000, 1000, 1000);
    
}

int dataflow_large_test() {
    
    printf("TEST: matrix w/ 10000 rows and 10000 columns\n");
    
    return test_matrix(10000, 10000, 10000, 10000);
    
}

int dataflow_test() {
    
    int passes = 0;
    
    passes += dataflow_zeros_test();
    passes += dataflow_1000_test();
    passes += dataflow_large_test();
    
    return passes;
    
}


//Abdalaziz Elshamli testing

int StructuralBasisTesting( int matrix1Rows, int matrix1Cols, int matrix2Rows, int matrix2Cols)
{
    if(matrix1Rows == matrix2Rows && matrix1Cols == matrix2Cols)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

//Tests if the function correctly returns true if all values are equal
int stb1()
{
    int test = StructuralBasisTesting(5, 5, 5, 5);
    if(test = 1)
    {
        printf("\nTest 1 was completed correctly\n");
        return 1;
    }
    else
    {
        printf("\nTest failed\n");
        return 0;
    }
}


//both are not equal
int stb2()
{
    int test = StructuralBasisTesting(4,4,5,5);
    if(test == 0)
    {
        printf("\nTest 2 was completed correctly\n");
        return 1;
    }
    else
    {
        printf("\nTest failed\n");
        return 0;
    }    
}

//equal but values are different
int stb3()
{
    int test = StructuralBasisTesting(4,5,4,5);
    if(test == 1)
    {
        printf("\nTest 3 was completed correctly\n");
        return 1;
    }
    else
    {
        printf("\nTest failed\n");
        return 0;
    }    
}

//put a character in for the first variable
int stb4()
{
    int test = StructuralBasisTesting("John",4,5,6);
    if(test == 0)
    {
        printf("\nTest 4 was completed correctly\n");
        return 1;
    }
    else
    {
        printf("\nTest failed\n");
        return 0;
    }    
}


//put decimals (error case)
int stb5()
{
    int test = StructuralBasisTesting(4.5,4.5,4.5,4.5);
    if(test == 1)
    {
        printf("\nTest 5 was completed correctly\n");
        return 0;
    }
    else
    {
        printf("\nTest failed\n");
        return 1;
    }    
}

//different kinds of decimals
int stb6()
{
    int test = StructuralBasisTesting(4.05,4.55,4,4.55);
    if(test == 1)
    {
        printf("\nTest 6 was completed correctly\n");
        return 0;
    }
    else
    {
        printf("\nTest failed\n");
        return 1;
    }    
}

//declare half as floats
int stb7()
{
    float a = 5;
    int b = 5;
    int test = StructuralBasisTesting(a,5,b,5);
    if(test == 1)
    {
        printf("\nTest 7 was completed correctly\n");
       return 1;
    }
    else
    {
        printf("\nTest failed\n");
        return 0;
    }    
} 

//all as floats
int stb8()
{
    float a = 5;
    int test = StructuralBasisTesting(a,a,a,a);
    if(test == 1)
    {
        printf("\nTest 8 was completed correctly\n");
       return 1;
    }
    else
    {
        printf("\nTest failed\n");
        return 0;
    }    
}

//all defined as pointers
int stb9()
{
    int *a = (int *)malloc(sizeof(int));
    int *b = (int *)malloc(sizeof(int));
	
	*a = 5;
	*b = 5;

    int test = StructuralBasisTesting(*a,*b,*a,*b);
    if(test == 1)
    {
        printf("\nTest 9 was completed correctly\n");
       return 1;
    }
    else
    {
        printf("\nTest failed\n");
        return 0;
    }
	
	free(a);
	free(b);
}


//one is a pointer, the other isn't
int stb10()
{
    int *a =  (int *)malloc(sizeof(int));
    int b = 5;
	
	*a = 5;

    int test = StructuralBasisTesting(*a,b,*a,b);
    if(test == 1)
    {
        printf("\nTest 10 was completed correctly\n");
       return 1;
    }
    else
    {
        printf("\nTest failed\n");
        return 0;
    }    
	
	free(a);
}


//---------------------------------------------------------
//Ryan Paul section

int structuredBasisForLoopsOne(int matrix1Rows, int matrix1Cols, int matrix2Rows, int matrix2Cols)
{
  int j;
  int i;

    for (i = 0; i < matrix1Rows; i++){

        for (j = 0; j < matrix1Cols; j++){

            return 1;
        }
    }
    return 0;
}

int structuredBasisForLoopsTwo(int matrix1Rows, int matrix1Cols, int matrix2Rows, int matrix2Cols)
{
    int j;
    int i;

    for (i = 0; i < matrix2Rows; i++){

        for (j = 0; j < matrix2Cols; j++){

            return 1;
        }
    }
    return 0;
}

int structuredBasisForLoopsThree(int matrix1Rows,int matrix1Cols,int matrix2Rows,int matrix2Cols)
{

    int j;
    int i;

    for (j = 0;j < matrix1Cols; j++){

        for (i = 0; i < matrix1Rows; i++){

            return 1;
        }
    }
    return 0;
}

// Initial for loop is false
int forLoopOneTestOne()
{
    int test = structuredBasisForLoopsOne(0,5,0,0);
    
    if(test == 1)
    {
        //printf("\nTest Passed\n");
        return 1;
    }
    else
    {
        //printf("\nTest Failed\n");
        return 0;
    }
}

// Inital for loop is true
int forLoopOneTestTwo()
{
    int test = structuredBasisForLoopsOne(5,0,0,0);
    
    if(test == 1)
    {
        //printf("\nTest Passed\n");
        return 1;
    }
    else
    {
        //printf("\nTest Failed\n");
        return 0;
    }
}

// Both for loops are true
int forLoopOneTestThree()
{
    int test = structuredBasisForLoopsOne(5,5,0,0);
    
    if(test == 1)
    {
        //printf("\nTest Passed\n");
        return 1;
    }
    else
    {
        //printf("\nTest Failed\n");
        return 0;
    }
}

// Float values sent in
int forLoopOneTestFour()
{
    int test = structuredBasisForLoopsOne(5.0,5.0,0,0);
    
    if(test == 1)
    {
        //printf("\nTest Passed\n");
        return 1;
    }
    else
    {
        //printf("\nTest Failed\n");
        return 0;
    }
}

// Initial for loop is false
int forLoopTwoTestOne()
{
    int test = structuredBasisForLoopsTwo(0,0,0,5);
    
    if(test == 1)
    {
        //printf("\nTest Passed\n");
        return 1;
    }
    else
    {
        //printf("\nTest Failed\n");
        return 0;
    }
}

// Inital for loop is true
int forLoopTwoTestTwo()
{
    int test = structuredBasisForLoopsTwo(0,0,5,0);
    
    if(test == 1)
    {
        //printf("\nTest Passed\n");
        return 1;
    }
    else
    {
        //printf("\nTest Failed\n");
        return 0;
    }
}

// Both for loops are true
int forLoopTwoTestThree()
{
    int test = structuredBasisForLoopsTwo(0,0,5,5);
    
    if(test == 1)
    {
        //printf("\nTest Passed\n");
        return 1;
    }
    else
    {
        //printf("\nTest Failed\n");
        return 0;
    }
}

// Float values sent in
int forLoopTwoTestFour()
{
    int test = structuredBasisForLoopsTwo(0,0,5.0,5.0);
    
    if(test == 1)
    {
        //printf("\nTest Passed\n");
        return 1;
    }
    else
    {
        //printf("\nTest Failed\n");
        return 0;
    }
}

// Initial for loop is false
int forLoopThreeTestOne()
{
    int test = structuredBasisForLoopsThree(0,5,0,0);
    
    if(test == 1)
    {
        //printf("\nTest Passed\n");
        return 1;
    }
    else
    {
        //printf("\nTest Failed\n");
        return 0;
    }
}

// Inital for loop is true
int forLoopThreeTestTwo()
{
    int test = structuredBasisForLoopsThree(5,0,0,0);
    
    if(test == 1)
    {
        //printf("\nTest Passed\n");
        return 1;
    }
    else
    {
        //printf("\nTest Failed\n");
        return 0;
    }
}

// Both for loops are true
int forLoopThreeTestThree()
{
    int test = structuredBasisForLoopsThree(5,5,0,0);
    
    if(test == 1)
    {
        //printf("\nTest Passed\n");
        return 1;
    }
    else
    {
        //printf("\nTest Failed\n");
        return 0;
    }
}

// Float values sent in
int forLoopThreeTestFour()
{
    int test = structuredBasisForLoopsThree(5.0,5.0,0,0);
    
    if(test == 1)
    {
        //printf("\nTest Passed\n");
        return 1;
    }
    else
    {
        //printf("\nTest Failed\n");
        return 0;
    }
}

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

	if( testResults[0] == 512 && testResults[1] == 262144 && testResults[2] == 512 && testResults[3] == 262144 ) {
		printf( "Test Passed\n" );
	}
	else {
		printf( "Test Failed\n" );
		numErrors++;
	}

	printf( "Testing lower limits:\n\n" );

	//Test setting loops to lower bounds, run with matrices all of size 0
	printf( "Test 2: running function with matrices all of size 0\nExpected: all loops run 0 times\n" );
	testResults = last4loops( 0, 0, 0, 0 );
	printf( "Result: loop 1 ran %d times, loop 2 ran %d times, loop 3 ran %d times, loop 4 ran %d times\n\n", testResults[0], testResults[1], testResults[2], testResults[3] );

	if( testResults[0] == 0 && testResults[1] == 0 && testResults[2] == 0 && testResults[3] == 0 ) {
		printf( "Test Passed\n" );
	}
	else {
		printf( "Test Failed\n" );
		numErrors++;
	}

	//Test setting loops out of lower bounds, run with matrices all of size -1
	printf( "Test 3: running function with matrices all of size -1\nExpected: all loops run 0 times\n" );
	testResults = last4loops( -1, -1, -1, -1 );
	printf( "Result: loop 1 ran %d times, loop 2 ran %d times, loop 3 ran %d times, loop 4 ran %d times\n\n", testResults[0], testResults[1], testResults[2], testResults[3] );

	if( testResults[0] == 0 && testResults[1] == 0 && testResults[2] == 0 && testResults[3] == 0 ) {
		printf( "Test Passed\n" );
	}
	else {
		printf( "Test Failed\n" );
		numErrors++;
	}

	printf( "Testing middle values:\n\n" );

	//Test middle / average loop values, just to make sure the loops actually run correctly
	printf( "Test 4: running function with middle values, matrices size 3 x 3\nExpected: loops 1 & 3 run 3 times\n          loops 2 & 4 run 9 times\n" );
	testResults = last4loops( 3, 3, 3, 3 );
	printf( "Result: loop 1 ran %d times, loop 2 ran %d times, loop 3 ran %d times, loop 4 ran %d times\n\n", testResults[0], testResults[1], testResults[2], testResults[3] );

	if( testResults[0] == 3 && testResults[1] == 9 && testResults[2] == 3 && testResults[3] == 9 ) {
		printf( "Test Passed\n" );
	}
	else {
		printf( "Test Failed\n" );
		numErrors++;
	}

	free( testResults );

	printf( "Finished boundary testing last 4 loops\n\n" );
	printf( "Total errors: %u\n", numErrors );

	return numErrors;

}


/*This function boundary tests the first 4 loops in unit_test.c and the initial if statement.
 *Returns the number of errors that occured during testing and also prints the results of each test
 *Written by Luca Bozzetto on 2018/11/29
 */
unsigned int boundaryTestFirstLoops()
{
    unsigned int numErrors = 0;
    
    printf( "Boundary testing first 4 loops and initial if statement\n\n" );
    
    printf( "1. Testing matrixes with 0 columns and 0 rows:\n" );
    if( zeroDimensionMatrix() ) {
        
        printf( "[TEST FAILED] Matrix with 0 rows and columns\n" );
        numErrors++;
        
    }else {
        
        printf( "[TEST PASSED] Matrix with 0 rows and columns\n" );
        
    }
    
    printf( "2. Testing matrixes with different column values:\n" );
    if( differentColumnsSize() ) {
        
        printf( "[TEST FAILED] First matrix with 2 columns and second matrix with 3 columns\n" );
        numErrors++;
        
    }else {
        
        printf( "[TEST PASSED] First matrix with 2 columns and second matrix with 3 columns\n" );
        
    }
    
    printf( "3. Testing matrixes with different row values:\n" );
    if( differentRowsSize() ) {
        
        printf( "[TEST FAILED] First matrix with 2 rows and second matrix with 3 rows\n" );
        numErrors++;
        
    }else {
        
        printf( "[TEST PASSED] First matrix with 2 rows and second matrix with 3 rows\n" );
        
    }
    
    printf( "4. Testing matrixes with the a negative values for rows and columns:\n" );
    if( negativeValues() ) {
        
        printf( "[TEST FAILED] Matrixes with negative values\n" );
        numErrors++;
        
    }else {
        
        printf( "[TEST PASSED] Matrixes with negative values\n" );
        
    }
    
    printf( "5. Testing matrixes with the same number of rows and columns:\n" );
    if( normalBehaviour() ) {
        
        printf( "[TEST FAILED] Matrixes with 2 rows and 2 columns\n" );
        numErrors++;
        
    }else {
        
        printf( "[TEST PASSED] Matrixes with 2 rows and 2 columns\n" );
        
    }
    
    printf( "Completed testing first 4 loops and initial if statement with %d errors\n\n", numErrors);
    
    return numErrors;
    
}

/*
 * Runs the structure tests for test harness
 * Written by Brandon Lit 2018-11-30
 */
void structureTest(){
	int result = 0;
	int structurePassed = 0;
	printf("~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("Test 3: Structure \n");
	printf("Test 3.1: Matrix Declaration\n");
	printf("~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("Test 3.11: Valid input");
	printf("Creating both matrices as 5 x 5's\n");
	printf("Expected: 1");
	result = stb1();
	printf("Received: %d\n", result);
	
	if(result){
		printf("Test Passed\n");
		structurePassed += 1;
	} else {
		printf("Test Failed\n");
	}
	
	printf("Test 3.12: Invalid input\n");
	printf("Inserting mismatching matrix sizes\n");
	printf("Matrix 1: 4 x 4, Matrix 2: 5 x 5\n");
	printf("Expected: 1\n");
	result = stb2();
	printf("Received: %d\n", result);
	
	if(result){
		printf("Test Passed\n");
		structurePassed += 1;
	} else {
		printf("Test Failed\n");
	}
	
	printf("Test 3.13: Valid input, mismatching row/cols\n");
	printf("Inserting mismatching matrix rows and columns\n");
	printf("Matrix 1: 4 x 5, Matrix 2: 4 x 5\n");
	printf("Expected: 1\n");
	result = stb3();
	printf("Received: %d\n", result);
	
	if(result){
		printf("Test Passed\n");
		structurePassed += 1;
	} else {
		printf("Test Failed\n");
	}
	
	printf("Test 3.14: Inserting a string\n");
	printf("Inserting the string 'John' instead of an integer \n");
	printf("Matrix 1: John x 5, Matrix 2: 5 x 6\n");
	printf("Expected: 1\n");
	result = stb4();
	printf("Received: %d\n", result);
	
	if(result){
		printf("Test Passed\n");
		structurePassed += 1;
	} else {
		printf("Test Failed\n");
	}
	
	printf("Test 3.15: Inserting decimal numbers\n");
	printf("Inserting the number 4.5 for all row/col values\n");
	printf("Matrix 1: 4.5 x 4.5, Matrix 2: 4.5 x 4.5\n");
	printf("Expected: 0\n");
	result = stb5();
	printf("Received: %d\n", result);
	
	if(!result){
		printf("Test Passed\n");
		structurePassed += 1;
	} else {
		printf("Test Failed\n");
	}
	
	printf("Test 3.16: Inserting mis-matching decimal numbers\n");
	printf("Inserting different decimal numbers for each row/col\n");
	printf("Matrix 1: 4.05 x 4.55, Matrix 2: 4 x 4.55\n");
	printf("Expected: 0\n");
	result = stb6();
	printf("Received: %d\n", result);
	
	if(!result){
		printf("Test Passed\n");
		structurePassed += 1;
	} else {
		printf("Test Failed\n");
	}
	
	printf("Test 3.17: Inserting floats\n");
	printf("Inserting 2 floats for each row\n");
	printf("Matrix 1: (float)5 x 5, Matrix 2: (float)5 x 5\n");
	printf("Expected: 1\n");
	result = stb7();
	printf("Received: %d\n", result);
	
	if(result){
		printf("Test Passed\n");
		structurePassed += 1;
	} else {
		printf("Test Failed\n");
	}
	
	printf("Test 3.18: Inserting all floats\n");
	printf("Inserting floats for each row/col\n");
	printf("Matrix 1: (float)5 x (float)5, Matrix 2: (float)5 x (float)5\n");
	printf("Expected: 1\n");
	result = stb8();
	printf("Received: %d\n", result);
	
	if(result){
		printf("Test Passed\n");
		structurePassed += 1;
	} else {
		printf("Test Failed\n");
	}
	
	printf("Test 3.19: Inserting all pointers\n");
	printf("Declaring int pointers and passing them to the function (As pointers)\n");
	printf("Matrix 1:s 5 x 5, Matrix 2: 5 x 5\n");
	printf("Expected: 1\n");
	result = stb9();
	printf("Received: %d\n", result);
	if(result){
		printf("Test Passed\n");
		structurePassed += 1;
	} else {
		printf("Test Failed\n");
	}
	
	printf("Test 3.110: Inserting all pointers\n");
	printf("Declaring an int pointer and passing it with an int\n");
	printf("Matrix 1: (pointer)5 x 5, Matrix 2: (pointer)5 x 5\n");
	printf("Expected: 1\n");
	result = stb10();
	printf("Received: %d\n", result);
	
	if(result){
		printf("Test Passed\n");
		structurePassed += 1;
	} else {
		printf("Test Failed\n");
	}
	
	
	printf("~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("TOTAL TESTS PASSED: %d\n", structurePassed);
	printf("TOTAL TESTS FAILED: %d\n", 10 - structurePassed);
	printf("~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("Test 3.2: For Loops\n");
	printf("Testing a set of nested for loops\n");
	printf("For loop conditions are determined by user input\n");
	printf("~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("Test 3.21: Making the outer for loop condition as false\n");
	printf("Outer loop condition: i < 0, Inner loop condition j < 5\n");	
	printf("Expected: 0\n");
	result = forLoopOneTestOne();
	printf("Received: %d\n", result);
	
	if(!result){
		printf("Test Passed\n");
		structurePassed += 1;
	} else {
		printf("Test Failed\n");
	}
	
	printf("Test 3.22: Making the inner for loop condition as false\n");
	printf("Outer loop condition: i < 5, Inner loop condition j < 0\n");	
	printf("Expected: 0\n");
	result = forLoopOneTestTwo();
	printf("Received: %d\n", result);
	
	if(!result){
		printf("Test Passed\n");
		structurePassed += 1;
	} else {
		printf("Test Failed\n");
	}
	
	printf("Test 3.23: Passing matching input as for loop conditions\n");
	printf("Outer loop condition: i < 5, Inner loop condition j < 5\n");	
	printf("Expected: 1\n");
	result = forLoopOneTestThree();
	printf("Received: %d\n", result);
	
	if(result){
		printf("Test Passed\n");
		structurePassed += 1;
	} else {
		printf("Test Failed\n");
	}

	printf("Test 3.24: Passing floats as the for loop conditions\n");
	printf("Outer loop condition: i < (float)5.0, Inner loop condition j < (float)5.0\n");	
	printf("Expected: 1\n");
	result = forLoopOneTestFour();
	printf("Received: %d\n", result);
	
	if(result){
		printf("Test Passed\n");
		structurePassed += 1;
	} else {
		printf("Test Failed\n");
	}
	
	printf("\n~~Now testing second nested for loops~~\n\n");
	
	printf("Test 3.25: Making the outer for loop condition as false\n");
	printf("Outer loop condition: i < 0, Inner loop condition j < 5\n");	
	printf("Expected: 0\n");
	result = forLoopTwoTestOne();
	printf("Received: %d\n", result);
	
	if(!result){
		printf("Test Passed\n");
		structurePassed += 1;
	} else {
		printf("Test Failed\n");
	}
	
	printf("Test 3.26: Making the inner for loop condition as false\n");
	printf("Outer loop condition: i < 5, Inner loop condition j < 0\n");	
	printf("Expected: 0\n");
	result = forLoopTwoTestTwo();
	printf("Received: %d\n", result);
	
	if(!result){
		printf("Test Passed\n");
		structurePassed += 1;
	} else {
		printf("Test Failed\n");
	}
	
	printf("Test 3.27: Passing matching input as for loop conditions\n");
	printf("Outer loop condition: i < 5, Inner loop condition j < 5\n");	
	printf("Expected: 1\n");
	result = forLoopTwoTestThree();
	printf("Received: %d\n", result);
	
	if(result){
		printf("Test Passed\n");
		structurePassed += 1;
	} else {
		printf("Test Failed\n");
	}
	
	printf("Test 3.28: Passing floats as the for loop conditions\n");
	printf("Outer loop condition: i < (float)5.0, Inner loop condition j < (float)5.0\n");	
	printf("Expected: 1\n");
	result = forLoopTwoTestFour();
	printf("Received: %d\n", result);
	
	if(result){
		printf("Test Passed\n");
		structurePassed += 1;
	} else {
		printf("Test Failed\n");
	}
	
	printf("\n~~Now testing third nested for loops~~\n\n");
	
	printf("Test 3.29: Making the outer for loop condition as false\n");
	printf("Outer loop condition: i < 0, Inner loop condition j < 5\n");	
	printf("Expected: 0\n");
	result = forLoopTwoTestOne();
	printf("Received: %d\n", result);
	
	if(!result){
		printf("Test Passed\n");
		structurePassed += 1;
	} else {
		printf("Test Failed\n");
	}
	
	printf("Test 3.210: Making the inner for loop condition as false\n");
	printf("Outer loop condition: i < 5, Inner loop condition j < 0\n");	
	printf("Expected: 0\n");
	result = forLoopTwoTestTwo();
	printf("Received: %d\n", result);
	
	if(!result){
		printf("Test Passed\n");
		structurePassed += 1;
	} else {
		printf("Test Failed\n");
	}
	
	printf("Test 3.211: Passing matching input as for loop conditions\n");
	printf("Outer loop condition: i < 5, Inner loop condition j < 5\n");	
	printf("Expected: 1\n");
	result = forLoopTwoTestThree();
	printf("Received: %d\n", result);
	
	if(result){
		printf("Test Passed\n");
		structurePassed += 1;
	} else {
		printf("Test Failed\n");
	}
	
	printf("Test 3.212: Passing floats as the for loop conditions\n");
	fflush(stdout);
	printf("Outer loop condition: i < (float)5.0, Inner loop condition j < (float)5.0\n");	
	printf("Expected: 1\n");
	result = forLoopTwoTestFour();
	printf("Received: %d\n", result);
	
	if(result){
		printf("Test Passed\n");
		structurePassed += 1;
	} else {
		printf("Test Failed\n");
	}
	
	printf("~~~~~~~~~~~~~~~~~~~\n");
	
	if(structurePassed < 22){
		printf("Failed: %d\nSucceeded %d", (22 - structurePassed), structurePassed);
	} else {
		printf("SUCCESS - all tests succeeded\n");
	}
}

/*
 * The main test harness
  * Written by Brandon Lit 2018-11-30
 */
int main(){
	int boundTest = 0;
	int result;
	int structurePassed = 0;
	int dataFlowPassed = 0;
	
	printf("~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("Test 1: Boundaries\n");
	printf("~~~~~~~~~~~~~~~~~~~~~~~~\n");
	
	printf("Testing the last 4 loops in unit_test.c and the else statement at the end of the file\n");
	boundTest = boundaryTestLoop4();
	
	if(boundTest > 0){
		printf("Failed: %d\nSucceeded %d", boundTest, (4 - boundTest));
	} else {
		printf("SUCCESS - all tests succeeded\n");
	}
	
	printf("~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("Testing the first 4 loops in unit_test.c and the initial if statement.\n");
	boundTest = boundaryTestFirstLoops();
	
	if(boundTest > 0){
		printf("Failed: %d\nSucceeded %d", boundTest, (4 - boundTest));
	} else {
		printf("SUCCESS - all tests succeeded\n");
	}
	
	printf("~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("Test 2: Data Flow\n");
	dataFlowPassed = dataflow_test();
	
	if(3 - dataFlowPassed > 0){
		printf("Failed: %d\nSucceeded %d", (3 - dataFlowPassed), dataFlowPassed);
	} else {
		printf("SUCCESS - all tests succeeded\n");
	}
	
	structureTest();

}