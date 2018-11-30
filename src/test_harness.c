#include <stdio.h>
#include <stdlib.h>

//Abdalaziz Elshamli tesing

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
    if(test == 0)
    {
        printf("\nTest 5 was completed correctly\n");
        return 1;
    }
    else
    {
        printf("\nTest failed\n");
        return 0;
    }    
}

//different kinds of decimals
int stb6()
{
    int test = StructuralBasisTesting(4.05,4.55,4,4.55);
    if(test == 0)
    {
        printf("\nTest 6 was completed correctly\n");
        return 1;
    }
    else
    {
        printf("\nTest failed\n");
        return 0;
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
        printf("\nTest Passed\n");
        return 1;
    }
    else
    {
        printf("\nTest Failed\n");
        return 0;
    }
}

// Inital for loop is true
int forLoopOneTestTwo()
{
    int test = structuredBasisForLoopsOne(5,0,0,0);
    
    if(test == 1)
    {
        printf("\nTest Passed\n");
        return 1;
    }
    else
    {
        printf("\nTest Failed\n");
        return 0;
    }
}

// Both for loops are true
int forLoopOneTestThree()
{
    int test = structuredBasisForLoopsOne(5,5,0,0);
    
    if(test == 1)
    {
        printf("\nTest Passed\n");
        return 1;
    }
    else
    {
        printf("\nTest Failed\n");
        return 0;
    }
}

// Float values sent in
int forLoopOneTestFour()
{
    int test = structuredBasisForLoopsOne(5.0,5.0,0,0);
    
    if(test == 1)
    {
        printf("\nTest Passed\n");
        return 1;
    }
    else
    {
        printf("\nTest Failed\n");
        return 0;
    }
}

// Initial for loop is false
int forLoopTwoTestOne()
{
    int test = structuredBasisForLoopsTwo(0,0,0,5);
    
    if(test == 1)
    {
        printf("\nTest Passed\n");
        return 1;
    }
    else
    {
        printf("\nTest Failed\n");
        return 0;
    }
}

// Inital for loop is true
int forLoopTwoTestTwo()
{
    int test = structuredBasisForLoopsTwo(0,0,5,0);
    
    if(test == 1)
    {
        printf("\nTest Passed\n");
        return 1;
    }
    else
    {
        printf("\nTest Failed\n");
        return 0;
    }
}

// Both for loops are true
int forLoopTwoTestThree()
{
    int test = structuredBasisForLoopsTwo(0,0,5,5);
    
    if(test == 1)
    {
        printf("\nTest Passed\n");
        return 1;
    }
    else
    {
        printf("\nTest Failed\n");
        return 0;
    }
}

// Float values sent in
int forLoopTwoTestFour()
{
    int test = structuredBasisForLoopsTwo(0,0,5.0,5.0);
    
    if(test == 1)
    {
        printf("\nTest Passed\n");
        return 1;
    }
    else
    {
        printf("\nTest Failed\n");
        return 0;
    }
}

// Initial for loop is false
int forLoopThreeTestOne()
{
    int test = structuredBasisForLoopsThree(0,5,0,0);
    
    if(test == 1)
    {
        printf("\nTest Passed\n");
        return 1;
    }
    else
    {
        printf("\nTest Failed\n");
        return 0;
    }
}

// Inital for loop is true
int forLoopThreeTestTwo()
{
    int test = structuredBasisForLoopsThree(5,0,0,0);
    
    if(test == 1)
    {
        printf("\nTest Passed\n");
        return 1;
    }
    else
    {
        printf("\nTest Failed\n");
        return 0;
    }
}

// Both for loops are true
int forLoopThreeTestThree()
{
    int test = structuredBasisForLoopsThree(5,5,0,0);
    
    if(test == 1)
    {
        printf("\nTest Passed\n");
        return 1;
    }
    else
    {
        printf("\nTest Failed\n");
        return 0;
    }
}

// Float values sent in
int forLoopThreeTestFour()
{
    int test = structuredBasisForLoopsThree(5.0,5.0,0,0);
    
    if(test == 1)
    {
        printf("\nTest Passed\n");
        return 1;
    }
    else
    {
        printf("\nTest Failed\n");
        return 0;
    }
}

void structureTest(){
	printf("~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("Test 3: Structure \n");
	printf("Test 3.1: Matrix Declaration\n");
	printf("~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("Test 3.11: Valid input");
	printf("\tCreating both matrices as 5 x 5's\n");
	printf("Expected: 1");
	result = stb1();
	printf("Received: %d", result);
	
	if(!result){
		printf("Test Passed\n");
		structurePassed += 1;
	} else {
		printf("Test Failed\n");
	}
	
	printf("Test 3.12: Invalid input\n");
	printf("\tInserting mismatching matrix sizes\n");
	printf("\tMatrix 1: 4 x 4, Matrix 2: 5 x 5\n");
	printf("Expected: 1\n");
	result = stb2();
	printf("Received: %d", result);
	
	if(result){
		printf("Test Passed\n");
		structurePassed += 1;
	} else {
		printf("Test Failed\n");
	}
	
	printf("Test 3.13: Valid input, mismatching row/cols\n");
	printf("\tInserting mismatching matrix rows and columns\n");
	printf("\tMatrix 1: 4 x 5, Matrix 2: 4 x 5\n");
	printf("Expected: 1\n");
	result = stb3();
	printf("Received: %d", result);
	
	if(result){
		printf("Test Passed\n");
		structurePassed += 1;
	} else {
		printf("Test Failed\n");
	}
	
	printf("Test 3.14: Inserting a string\n");
	printf("\tInserting the string 'John' instead of an integer \n");
	printf("\tMatrix 1: John x 5, Matrix 2: 5 x 6\n");
	printf("Expected: 1\n");
	result = stb4();
	printf("Received: %d", result);
	
	if(result){
		printf("Test Passed\n");
		structurePassed += 1;
	} else {
		printf("Test Failed\n");
	}
	
	printf("Test 3.15: Inserting decimal numbers\n");
	printf("\tInserting the number 4.5 for all row/col values\n");
	printf("\tMatrix 1: 4.5 x 4.5, Matrix 2: 4.5 x 4.5\n");
	printf("Expected: 0");
	result = stb5();
	printf("Received: %d", result);
	
	if(result){
		printf("Test Passed\n");
		structurePassed += 1;
	} else {
		printf("Test Failed\n");
	}
	
	printf("Test 3.16: Inserting mis-matching decimal numbers\n");
	printf("\tInserting different decimal numbers for each row/col\n");
	printf("\tMatrix 1: 4.05 x 4.55, Matrix 2: 4 x 4.55\n");
	printf("Expected: 1");
	result = stb6();
	printf("Received: %d", result);
	
	if(result){
		printf("Test Passed\n");
		structurePassed += 1;
	} else {
		printf("Test Failed\n");
	}
	
	printf("Test 3.17: Inserting floats\n");
	printf("\tInserting 2 floats for each row\n");
	printf("\tMatrix 1: (float)5 x 5, Matrix 2: (float)5 x 5\n");
	printf("Expected: 1");
	result = stb7();
	printf("Received: %d", result);
	
	if(result){
		printf("Test Passed\n");
		structurePassed += 1;
	} else {
		printf("Test Failed\n");
	}
	
	printf("Test 3.18: Inserting all floats\n");
	printf("\tInserting floats for each row/col\n");
	printf("\tMatrix 1: (float)5 x (float)5, Matrix 2: (float)5 x (float)5\n");
	printf("Expected: 1");
	result = stb8();
	printf("Received: %d", result);
	
	if(result){
		printf("Test Passed\n");
		structurePassed += 1;
	} else {
		printf("Test Failed\n");
	}
	
	printf("Test 3.19: Inserting all pointers\n");
	printf("\tDeclaring int pointers and passing them to the function (As pointers)\n");
	printf("\tMatrix 1:s 5 x 5, Matrix 2: 5 x 5\n");
	printf("Expected: 1");
	result = stb9();
	printf("Received: %d", result);
	if(result){
		printf("Test Passed\n");
		structurePassed += 1;
	} else {
		printf("Test Failed\n");
	}
	
	printf("Test 3.110: Inserting all pointers\n");
	printf("\tDeclaring an int pointer and passing it with an int\n");
	printf("\tMatrix 1: (pointer)5 x 5, Matrix 2: (pointer)5 x 5\n");
	printf("Expected: 1");
	result = stb10();
	printf("Received: %d", result);
	
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
	printf("\tOuter loop condition: i < 0, Inner loop condition j < 5\n");	
	printf("Expected: 0");
	result = forLoopOneTestOne();
	printf("Received: %d", result);
	
	if(!result){
		printf("Test Passed\n");
		structurePassed += 1;
	} else {
		printf("Test Failed\n");
	}
	
	printf("Test 3.22: Making the inner for loop condition as false\n");
	printf("\tOuter loop condition: i < 5, Inner loop condition j < 0\n");	
	printf("Expected: 0");
	result = forLoopOneTestTwo();
	printf("Received: %d", result);
	
	if(!result){
		printf("Test Passed\n");
		structurePassed += 1;
	} else {
		printf("Test Failed\n");
	}
	
	printf("Test 3.23: Passing matching input as for loop conditions\n");
	printf("\tOuter loop condition: i < 5, Inner loop condition j < 5\n");	
	printf("Expected: 1");
	result = forLoopOneTestThree();
	printf("Received: %d", result);
	
	if(result){
		printf("Test Passed\n");
		structurePassed += 1;
	} else {
		printf("Test Failed\n");
	}
	
	printf("Test 3.24: Passing floats as the for loop conditions\n");
	printf("\tOuter loop condition: i < (float)5.0, Inner loop condition j < (float)5.0\n");	
	printf("Expected: 1");
	result = forLoopOneTestFour();
	printf("Received: %d", result);
	
	if(result){
		printf("Test Passed\n");
		structurePassed += 1;
	} else {
		printf("Test Failed\n");
	}
	
	printf("\n~~Now testing second nested for loops~~\n\n");
	
	printf("Test 3.25: Making the outer for loop condition as false\n");
	printf("\tOuter loop condition: i < 0, Inner loop condition j < 5\n");	
	printf("Expected: 0");
	result = forLoopTwoTestOne();
	printf("Received: %d", result);
	
	if(!result){
		printf("Test Passed\n");
		structurePassed += 1;
	} else {
		printf("Test Failed\n");
	}
	
	printf("Test 3.26: Making the inner for loop condition as false\n");
	printf("\tOuter loop condition: i < 5, Inner loop condition j < 0\n");	
	printf("Expected: 0");
	result = forLoopTwoTestTwo();
	printf("Received: %d", result);
	
	if(!result){
		printf("Test Passed\n");
		structurePassed += 1;
	} else {
		printf("Test Failed\n");
	}
	
	printf("Test 3.27: Passing matching input as for loop conditions\n");
	printf("\tOuter loop condition: i < 5, Inner loop condition j < 5\n");	
	printf("Expected: 1");
	result = forLoopTwoTestThree();
	printf("Received: %d", result);
	
	if(result){
		printf("Test Passed\n");
		structurePassed += 1;
	} else {
		printf("Test Failed\n");
	}
	
	printf("Test 3.28: Passing floats as the for loop conditions\n");
	printf("\tOuter loop condition: i < (float)5.0, Inner loop condition j < (float)5.0\n");	
	printf("Expected: 1");
	result = forLoopTwoTestFour();
	printf("Received: %d", result);
	
	if(result){
		printf("Test Passed\n");
		structurePassed += 1;
	} else {
		printf("Test Failed\n");
	}
	
	printf("\n~~Now testing third nested for loops~~\n\n");
	
	printf("Test 3.29: Making the outer for loop condition as false\n");
	printf("\tOuter loop condition: i < 0, Inner loop condition j < 5\n");	
	printf("Expected: 0");
	result = forLoopTwoTestOne();
	printf("Received: %d", result);
	
	if(!result){
		printf("Test Passed\n");
		structurePassed += 1;
	} else {
		printf("Test Failed\n");
	}
	
	printf("Test 3.210: Making the inner for loop condition as false\n");
	printf("\tOuter loop condition: i < 5, Inner loop condition j < 0\n");	
	printf("Expected: 0");
	result = forLoopTwoTestTwo();
	printf("Received: %d", result);
	
	if(!result){
		printf("Test Passed\n");
		structurePassed += 1;
	} else {
		printf("Test Failed\n");
	}
	
	printf("Test 3.211: Passing matching input as for loop conditions\n");
	printf("\tOuter loop condition: i < 5, Inner loop condition j < 5\n");	
	printf("Expected: 1");
	result = forLoopTwoTestThree();
	printf("Received: %d", result);
	
	if(result){
		printf("Test Passed\n");
		structurePassed += 1;
	} else {
		printf("Test Failed\n");
	}
	
	printf("Test 3.212: Passing floats as the for loop conditions\n");
	fflush(stdout);
	printf("\tOuter loop condition: i < (float)5.0, Inner loop condition j < (float)5.0\n");	
	printf("Expected: 1");
	result = forLoopTwoTestFour();
	printf("Received: %d", result);
	
	if(result){
		printf("Test Passed\n");
		structurePassed += 1;
	} else {
		printf("Test Failed\n");
	}
}

int main(){
	int boundTest = 0;
	int result;
	int structurePassed = 0;
	
	printf("~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("Test 1: Boundaries\n");
	//boundTest = boundaryTestLoop4();
	
	if(boundTest > 0){
		printf("Failed: %d\nSucceeded %d", boundTest, (4 - boundTest));
	} else {
		printf("SUCCESS - all tests succeeded\n");
	}
	
	printf("~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("Test 2: Data Flow\n");
	printf("Test 2.1: \n");
	printf("Test 2.2: \n");
	
	structureTest();

}