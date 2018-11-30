
#include <stdio.h>

int firstLoopIterations = 0;
int firstInnerLoopIterations = 0;
int secondLoopIterations = 0;
int secondInnerLoopIterations = 0;

int enteredIfCondition = 0;


void matrix_sum_boundary_first(int matrix1Rows,int matrix1Cols,int matrix2Rows,int matrix2Cols){

	int i,j;

	firstLoopIterations = 0;
	firstInnerLoopIterations = 0;
	secondLoopIterations = 0;
	secondInnerLoopIterations = 0;

	enteredIfCondition = 0;

	//if both matrices have the same number of rows and columns
	if(matrix1Rows == matrix2Rows && matrix1Cols == matrix2Cols){

		enteredIfCondition = 1; // true

		float a[matrix1Rows][matrix1Cols];
		float b[matrix2Rows][matrix2Cols];
		float c[matrix1Rows][matrix1Cols];

		//gets the values for each row of matrix 1
		for (i = 0; i < matrix1Rows; i++){
			
			firstLoopIterations++;

			for (j = 0; j < matrix1Cols; j++){
				
				firstInnerLoopIterations++;
				a[i][j] = 1;
				
			}
		}
		
		//gets the values for each row of matrix 2 
		for (i = 0; i < matrix2Rows; i++){

			secondLoopIterations++;
			
			for (j = 0; j < matrix2Cols; j++){
				
				secondInnerLoopIterations++;
				b[i][j] = 1;
				
			}
		}
		
		//using matrix addition, adds each row and column value together to get a new matrix
		for (i = 0; i < matrix1Rows; i++){
			for (j = 0; j < matrix1Cols; j++){
				
				c[i][j]=a[i][j]+b[i][j];
				
			}
		}
	}
    else{

		enteredIfCondition = 0;
		
    }

}


unsigned int zeroDimensionMatrix(){
	
	matrix_sum_boundary_first(0,0,0,0);

	if(enteredIfCondition && !firstLoopIterations && !firstInnerLoopIterations
		&& !secondLoopIterations && !secondInnerLoopIterations)
		return 0;
	else
		return 1;

}

unsigned int differentColumnsSize(){

	matrix_sum_boundary_first(2,2,2,3);

	if(!enteredIfCondition && !firstLoopIterations && !firstInnerLoopIterations
		&& !secondLoopIterations && !secondInnerLoopIterations)
		return 0;
	else
		return 1;

}

unsigned int differentRowsSize(){

	matrix_sum_boundary_first(2,2,3,2);

	if(!enteredIfCondition && !firstLoopIterations && !firstInnerLoopIterations
		&& !secondLoopIterations && !secondInnerLoopIterations)
		return 0;
	else
		return 1;

}

unsigned int negativeValues(){

	matrix_sum_boundary_first(-1,-1,-1,-1);

	if(!firstLoopIterations && !firstInnerLoopIterations
		&& !secondLoopIterations && !secondInnerLoopIterations)
		return 0;
	else
		return 1;

}

unsigned int normalBehaviour(){

	matrix_sum_boundary_first(2,2,2,2);

	if(enteredIfCondition && firstLoopIterations == 2 && firstInnerLoopIterations == 4
		&& secondLoopIterations == 2 && secondInnerLoopIterations == 4)
		return 0;
	else
		return 1;
}
