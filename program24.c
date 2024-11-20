//C Program to Find Transpose of a Matrix
#include<stdio.h>
void transposeMatrix(int rows, int cols, int Matrix[rows][cols], int transpose[cols][rows])
{
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            transpose[j][i]=Matrix[i][j];
        }
    }
}
int main()
{
    int rows, cols;
    printf("enter the number of rows: ");
    scanf("%d", &rows);
    printf("enter the number of cols: ");
    scanf("%d", &cols);
    int Matrix[rows][cols];
    int transpose[cols][rows];
    printf("enter the elements of the matrix: \n");
    for(int i=0; i<rows; i++)
    {
        for (int j=0; j<cols; j++)
        {
            scanf("%d", &Matrix[i][j]);
        }
    }
    transposeMatrix(rows, cols, Matrix, transpose);
    printf("transpose of the matrix:\n");
    for(int i=0; i<cols; i++)
    {
        for(int j=0; j<rows; j++)
        {
            printf("%d", transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}
