//Determinant of 2x2 matrix using functions
#include<stdio.h>
int printDeterminant(int a, int b, int c, int d);
int main()
{
    int a, b, c, d;
    printf("enter the elements of 2*2 matrix:\n");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    printDeterminant(a, b, c, d);
    return 0;
}
int printDeterminant(int a, int b, int c, int d)
{
   int determinant=(a*d)-(b*c);
   printf("The determinant of the matrix is:%d\n", determinant);
    return determinant;
}
