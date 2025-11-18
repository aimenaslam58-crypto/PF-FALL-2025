#include <stdio.h>
void userInput(int matrix[10][10], int rows,int cols);
void matrixMulti(int A[10][10], int B[10][10], int result[10][10], int r1,int c1, int r2,int c2);
void printMatrix(int matrix[10][10], int rows, int cols);

int main(){
    int A[10][10], B[10][10], result[10][10];
    int r1,c1,r2,c2;
    
    printf("Enter Rows & Columns of Matrix A: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter Rows & Columns of Matrix B: ");
    scanf("%d %d", &r2, &c2);
    
    if(c1 != r2){
        printf("Matrix multiplication NOT possible!");
        return 0;
    }
    
    printf("\n Enter Elements of Matrix A: \n");
    userInput(A, r1, c1);
    
    printf("\n Enter Elements of Matrix B: \n");
    userInput(B, r2, c2);
    
    matrixMulti(A,B,result,r1,c1,r2,c2);
    
    printf("\nMatrix A:\n");
    printMatrix(A,r1,c1);
    
    printf("\nMatrix B:\n");
    printMatrix(B,r2,c2);
    
    printf("\nResultant Matrix (A X B):\n");
    printMatrix(result,r1,c2);
    
    return 0;
}

void userInput(int matrix[10][10], int rows,int cols){
    for(int i = 0; i<rows; i++){
        for(int j = 0; j<cols; j++){
            printf("Enter Element at index (%d,%d): ",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
}
    
void matrixMulti(int A[10][10], int B[10][10], int result[10][10], int r1,int c1, int r2,int c2){
    for(int i=0; i<r1; i++){
        for (int j=0; j<c2; j++){
            result[i][j] = 0;
            for(int k=0; k<c1; k++){
                result[i][j] += A[i][k]*B[k][j];
            }
        }
    }
}
    
void printMatrix(int matrix[10][10], int rows, int cols){
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            printf("%d\t",matrix[i][j]);
        }  printf("\n");
    }
}
