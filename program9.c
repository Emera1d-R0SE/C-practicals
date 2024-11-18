//Sparse Matrix using functions in c.
#include<stdio.h>
int main()
{
    int rows, cols;
    printf("enter the number of rows: ");
    scanf("%d", &rows);
    printf("enter the number of coloumns: ");
    scanf("%d", &cols);
    int matrix[rows][cols];
    printf("enter the elements of matrix:\n");
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    toSparse(rows, cols, matrix);
    return 0;
}
void toSparse(int rows, int cols, int matrix[rows][cols])
{
    printf("sparse matrix: \nrow\tcoloumn\tvalue\n");
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            if(matrix[i][j]!=0)
            {
             printf("%d\t%d\t%d\n", i, j, matrix[i][j]);
            }
        }
    }
}
