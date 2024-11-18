//Addition and Subtraction of Matrices using functions
#include<stdio.h>

int main()
{
    int mat1[2][2], mat2[2][2], sum[2][2], diff[2][2];
    printf("enter the elements of the first matrix:\n");
    for(int i=0; i<2; i++)
    {
        for(int j=0;j<2;j++)
    {
        scanf("%d", &mat1[i][j]);
    }
    }
    printf("enter the elements of the second matrix:\n");
    for(int i=0; i<2; i++)
    {
        for(int j=0;j<2;j++)
    {
        scanf("%d", &mat2[i][j]);
    }
    }
    addmatrices(mat1, mat2, sum);
    subtractmatrices(mat1, mat2, diff);
     printf("sum of the matrice:\n");
    for(int i=0; i<2; i++)
    {
        for(int j=0;j<2;j++)
    {
        printf("%d", sum[i][j]);
    }
    printf("\n");
    }
    printf("difference of the matrice:\n");
    for(int i=0; i<2; i++)
    {
        for(int j=0;j<2;j++)
    {
        printf("%d", diff[i][j]);
    }
    printf("\n");
    }
    return 0;
}
void addmatrices(int mat1[2][2], int mat2[2][2], int result[2][2])
{
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++)
        {
            result[i][j]=mat1[i][j]+mat2[i][j];
        }
    }
}
void subtractmatrices(int mat1[2][2], int mat2[2][2], int result[2][2])
{
    for(int i =0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            result[i][j]=mat1[i][j]-mat2[i][j];
        }
    }
}
