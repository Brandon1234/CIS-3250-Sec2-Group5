void matrix_sum(matrix1Rows,matrix1Cols,matrix2Rows,matrix2Cols){

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