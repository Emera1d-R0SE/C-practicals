//Matrix Mulitplication
#include<stdio.h>
int main(){
    int matrix1[3][3], matrix2[3][3], product[3][3];
    int rows1=3, cols1=3, rows2=3, cols2=3;
    int i, j;
    printf("Enter elements of matrix 1:\n");
    for(i=0; i<rows1; ++i)
    {
        for(j=0; j<cols1; ++j)
        {
            printf("enter the elements of matrix1[%d][%d]:", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }
     printf("Enter elements of matrix 1:\n");
    for(i=0; i<rows2; ++i)
    {
        for(j=0; j<cols2; ++j)
        {
            printf("enter the elements of matrix2[%d][%d]:", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }
    multiply(matrix1, matrix2, product, rows1, cols1, cols2);
          printf("\nProduct of matrices:\n");
          display(product, rows1, cols2);
          return 0;
}
void multiply(int m1[][3], int m2[][3], int result[][3], int rows1, int cols1, int cols2)
{
    int i, j, k;
    for(i=0;i<rows1; ++i)
    {
        for(j=0; j<cols2; ++j)
        {
            result[i][j]=0;
            for(k=0; k<cols1; ++k)
            {
                result[i][j]+=m1[i][j]*m2[k][j];
            }
        }
    }
}
void display(int matrix[][3], int rows, int cols)
{
    int i, j;
    for(i=0; i<rows; ++i)
    {
        for(j=0; j<cols; ++j)
        {
            printf("%d", matrix[i][j]);
        }
        printf("\n");
    }
}
