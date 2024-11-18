//Normal and Trace of Square Matrix using functions
#include<stdio.h>
#include<math.h>
int calculateTrace(int matrix[3][3], int size)
{
    int trace = 0;
    for(int i=0; i<size; i++)
    {
        trace+=matrix[i][i];
    }
    return trace;
}
double calculateNormal(int matrix[3][3], int rows, int cols)
{
    double normal=0.0;
        for(int i=0; i<rows; i++)
        {
            for(int j=0; j<cols; j++)
            {
                normal+=matrix[i][j]*matrix[i][j];
            }
        }
    return sqrt(normal);
}
int main()
{
    int size=3;
    int matrix[3][3];
    printf("enter the elements of the 3*3 matrix:\n");
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    int trace=calculateTrace(matrix, size);
    double normal=calculateNormal(matrix, size, size);
    printf("trace of the matrix:%d\n", trace);
    printf("normal of the matrix:%.2f\n", normal);
    return 0;
}
