#include <stdio.h>

void matrix_sum()
{

	int i,j,matrixRows1,matrixCols1,matrixRows2,matrixCols2;

	printf("Enter the number of rows of matrix 1:");
	scanf("%d",&matrixRows1);
	getchar();
	printf("Enter the number of columns of matrix :");
	scanf("%d",&matrixCols1);
	getchar();
	printf("Enter the number of rows of matrix 2:");
	scanf("%d",&matrixRows2);
	getchar();
	printf("Enter the number of columns of matrix 2:");
	scanf("%d",&matrixCols2);
	getchar();
	
	//if both matrices have the same number of rows and columns
	if(matrixRows1==matrixRows2&&matrixCols1==matrixCols2){

		float a[matrixRows1][matrixCols1];
		float b[matrixRows2][matrixCols2];
		float c[matrixRows1][matrixCols1];

		//gets the values for each row of matrix 1
		for(i=0;i<matrixRows1;i++){
			printf("Enter the members of matrix 1 row %d :",i+1);
			for(j=0;j<matrixCols1;j++){
				scanf("%f",&a[i][j]);
			}
		}
		
		//gets the values for each row of matrix 2 
		for(i=0;i<matrixRows2;i++){
			printf("Enter the members of matrix 2 row %d :",i+1);
			for(j=0;j<matrixCols2;j++){
				scanf("%f",&b[i][j]);
			}
		}
		
		//using matrix addition, adds each row and column value together to get a new matrix
		for(i=0;i<matrixRows1;i++){
			for(j=0;j<matrixCols1;j++){
				c[i][j]=a[i][j]+b[i][j];
			}
		}
		
		//outputs the new matrix as a table
		printf("The sum of both matrices is\n:");
        for(j=0;j<matrixCols1;j++){
            for(i=0;i<matrixRows1;i++){
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

	int i,j,matrixRows1,matrixCols1,matrixRows2,matrixCols2;
	
	//gets the users input
	printf("Enter the number of rows of matrix 1:");
	scanf("%d",&matrixRows1);
	getchar();
	printf("Enter the number of columns of matrix :");
	scanf("%d",&matrixCols1);
	getchar();
	printf("Enter the number of rows of matrix 2:");
	scanf("%d",&matrixRows2);
	getchar();
	printf("Enter the number of columns of matrix 2:");
	scanf("%d",&matrixCols2);
	getchar();
	
	float a[matrixRows1][matrixCols1];
	float b[matrixRows2][matrixCols2];
	float c[matrixRows1][matrixCols1];
	for(i=0;i<matrixRows1;i++){
		printf("Enter the members of matrix 1 row %d :",i+1);
		for(j=0;j<matrixCols1;j++){
			scanf("%f",&a[i][j]);
		}
	}
	for(i=0;i<matrixRows2;i++){
		printf("Enter the members of matrix 2 row %d :",i+1);
		for(j=0;j<matrixCols2;j++){
			scanf("%f",&b[i][j]);
		}
	}
	c[i][j]=1;
	for(i=0;i<matrixRows1;i++){
		for(j=0;j<matrixCols2;j++){
            c[i][j]=0;
            c[i][j]+=a[i][j]*b[i][j];
        }
    }


    printf("The  of the matrix is\n:");
    for(j=0;j<matrixCols1;j++){
        for(i=0;i<matrixRows2;i++){
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
		printf("Enter the members of row %d :",i+1);
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

