#include <stdio.h>

float a[100000][100000];
float b[100000][100000];
float c[100000][100000];

int test_matrix(int matrix1Rows, int matrix1Cols, int matrix2Rows, int matrix2Cols) {
    
    int i, j;
    
    //gets the values for each row of matrix 1
    for (i = 0; i < matrix1Rows; i++){
        for (j = 0; j < matrix1Cols; j++){
            
            a[i][j] = 1;
            
        }
    }
    
    //gets the values for each row of matrix 2
    for (i = 0; i < matrix2Rows; i++){
        
        for (j = 0; j < matrix2Cols; j++){
            
            b[i][j] = 1;
            
        }
    }
    
    //using matrix addition, adds each row and column value together to get a new matrix
    for (i = 0; i < matrix1Rows; i++){
        for (j = 0; j < matrix1Cols; j++){
            
            c[i][j]=a[i][j]+b[i][j];
            if (c[i][j] != 2) {
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
    
    printf("TEST: matrix w/ 100000 rows and 100000 columns\n");
    
    return test_matrix(100000, 100000, 100000, 100000);
    
}

int dataflow_test() {
    
    int passes = 0;
    
    passes += dataflow_zeros_test();
    passes += dataflow_1000_test();
    passes += dataflow_large_test();
    
    return passes;
    
}
