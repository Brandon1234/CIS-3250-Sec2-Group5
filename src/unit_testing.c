#include <stdio.h>

void matrix_sum(matrix1Rows,matrix1Cols,matrix2Rows,matrix2Cols){
  int i,j;
    //if both matrices have the same number of rows and columns
    if(matrix1Rows == matrix2Rows && matrix1Cols == matrix2Cols){

        float a[matrix1Rows][matrix1Cols];
        float b[matrix2Rows][matrix2Cols];
        float c[matrix1Rows][matrix1Cols];

        //gets the values for each row of matrix 1
        for (i = 0; i < matrix1Rows; i++){
            printf("Enter the members of matrix 1 row %d :",i+1);
            for (j = 0; j < matrix1Cols; j++){
                
                scanf("%f",&a[i][j]);
                
            }
        }
        
        //gets the values for each row of matrix 2 
        for (i = 0; i < matrix2Rows; i++){
            
            printf("Enter the members of matrix 2 row %d :",i+1);
            
            for (j = 0; j < matrix2Cols; j++){
                
                scanf("%f",&b[i][j]);
                
            }
        }
        
        //using matrix addition, adds each row and column value together to get a new matrix
        for (i = 0; i < matrix1Rows; i++){
            for (j = 0; j < matrix1Cols; j++){
                
                c[i][j]=a[i][j]+b[i][j];
                
            }
        }
        
        //outputs the new matrix as a table
        printf("The sum of both matrices is\n:");
        for (j = 0;j < matrix1Cols; j++){
            for (i = 0; i < matrix1Rows; i++){
                
                printf("\t\t %.0f",c[i][j]);
                
            }
            printf("\n");
        }
    }
    else{
        
        printf("\n\tThe matrices are incompatible");
        
    }

}

//Abdalaziz Elshamli tesing

int StructuralBasisTesting(matrix1Rows,matrix1Cols,matrix2Rows,matrix2Cols)
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
    int *a;
    int *b;
    a = 5;
    b = 5;
    int test = StructuralBasisTesting(a,b,a,b);
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
}


//one is a pointer, the other isn't
int stb10()
{
    int *a;
    int b;
    a = 5;
    b = 5;
    int test = StructuralBasisTesting(a,b,a,b);
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
}


//---------------------------------------------------------
//Ryan Paul section

int structuredBasisForLoopsOne(matrix1Rows,matrix1Cols,matrix2Rows,matrix2Cols)
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

int structuredBasisForLoopsTwo(matrix1Rows,matrix1Cols,matrix2Rows,matrix2Cols)
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

int structuredBasisForLoopsThree(matrix1Rows,matrix1Cols,matrix2Rows,matrix2Cols)
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

