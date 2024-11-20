//C Program to Multiply two Matrices by Passing Matrix to a Function
#include<stdio.h>
void MultiplyMatrices(int matrix1[2][2], int matrix2[2][2], int result[2][2])
{
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            result[i][j]=0;
            for(int k=0; k<2; k++)
            {
                result[i][j]+=matrix1[i][k]*matrix2[k][j];
            }
        }
    }
}
int main()
{
    int matrix1[2][2], matrix2[2][2], result[2][2];
    printf("enter the elements of first matrix2*2:\n");
    for(int i=0; i<2; i++)
       for(int j=0; j<2; j++)
           scanf("%d", &matrix1[i][j]);
      
    printf("enter the elements of second matrix2*2:\n");
    for(int i=0; i<2; i++)
       for(int j=0; j<2; j++)
           scanf("%d", &matrix2[i][j]);

      MultiplyMatrices(matrix1, matrix2, result);
     printf("resultant matrix:\n");
    for(int i=0; i<2; i++){
       for(int j=0; j<2; j++){
           printf("%d ", result[i][j]);
       }
       printf("\n");
    }
    return 0;
}
