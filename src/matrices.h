#include <stdio.h>

void matrix_sum()
{

	int i,j,matrix1Rows,matrix1Cols,matrix2Rows,matrix2Cols;

	printf("Enter the number of rows of matrix 1:");
	scanf("%d",&matrix1Rows);
	getchar();
	printf("Enter the number of columns of matrix :");
	scanf("%d",&matrix1Cols);
	getchar();
	printf("Enter the number of rows of matrix 2:");
	scanf("%d",&matrix2Rows);
	getchar();
	printf("Enter the number of columns of matrix 2:");
	scanf("%d",&matrix2Cols);
	getchar();
	
	//if both matrices have the same number of rows and columns
	if(matrix1Rows==matrix2Rows&&matrix1Cols==matrix2Cols){

		float a[matrix1Rows][matrix1Cols];
		float b[matrix2Rows][matrix2Cols];
		float c[matrix1Rows][matrix1Cols];

		//gets the values for each row of matrix 1
		for(i=0;i<matrix1Rows;i++){
			printf("Enter the members of matrix 1 column %d :",i+1);
			for(j=0;j<matrix1Cols;j++){
				scanf("%f",&a[i][j]);
			}
		}
		
		//gets the values for each row of matrix 2 
		for(i=0;i<matrix2Rows;i++){
			printf("Enter the members of matrix 2 column %d :",i+1);
			for(j=0;j<matrix2Cols;j++){
				scanf("%f",&b[i][j]);
			}
		}
		
		//using matrix addition, adds each row and column value together to get a new matrix
		for(i=0;i<matrix1Rows;i++){
			for(j=0;j<matrix1Cols;j++){
				c[i][j]=a[i][j]+b[i][j];
			}
		}
		
		//outputs the new matrix as a table
		printf("The sum of both matrices is\n:");
        for(j=0;j<matrix1Cols;j++){
            for(i=0;i<matrix1Rows;i++){
                printf("\t\t %.0f",c[i][j]);
			}
            printf("\n");
		}
	}
    else{
        printf("\n\tThe matrices are incompatible");
    }
}


void matrix_product()
{

	int i,j,matrix1Rows,matrix1Cols,matrix2Rows,matrix2Cols;
	
	//gets the users input
	printf("Enter the number of rows of matrix 1:");
	scanf("%d",&matrix1Rows);
	getchar();
	printf("Enter the number of columns of matrix :");
	scanf("%d",&matrix1Cols);
	getchar();
	printf("Enter the number of rows of matrix 2:");
	scanf("%d",&matrix2Rows);
	getchar();
	printf("Enter the number of columns of matrix 2:");
	scanf("%d",&matrix2Cols);
	getchar();
	
	float a[matrix1Rows][matrix1Cols];
	float b[matrix2Rows][matrix2Cols];
	float c[matrix1Rows][matrix1Cols];
	
	//gets the values for each row in matrix 1
	for(i=0;i<matrix1Rows;i++){
		printf("Enter the members of matrix 1 column %d :",i+1);
		for(j=0;j<matrix1Cols;j++){
			scanf("%f",&a[i][j]);
		}
	}
	
	//gets the values for each row in matrix 2
	for(i=0;i<matrix2Rows;i++){
		printf("Enter the members of matrix 2 column %d :",i+1);
		for(j=0;j<matrix2Cols;j++){
			scanf("%f",&b[i][j]);
		}
	}
	
	c[i][j]=1;
	
	for(i=0;i<matrix1Rows;i++){
		for(j=0;j<matrix2Cols;j++){
            c[i][j]=0;
            c[i][j]+=a[i][j]*b[i][j];
        }
    }


    printf("The product of the matrix is\n:");
    for(j=0;j<matrix1Cols;j++){
        for(i=0;i<matrix2Rows;i++){
            printf("\t\t %.0f",a[i][j]);
		}
        printf("\n");
	}
}

void matrix_transpose()
{
	int i,j,rows,cols;
	printf("Enter the number of rows:");
	scanf("%d",&rows);
	getchar();
	printf("Enter the number of columns:");
	scanf("%d",&cols);
	getchar();
	
	float a[rows][cols];

	for(i=0;i<rows;i++){
		printf("Enter the members of column %d :",i+1);
		for(j=0;j<cols;j++){
			scanf("%f",&a[i][j]);
		}
	}

	printf("The transpose of the matrix is\n:");
	for(j=0;j<cols;j++){
		for(i=0;i<rows;i++){		
			printf("\t\t %.0f",a[i][j]);
		}
		printf("\n");
	}
}

