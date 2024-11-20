//print sum of digits
#include<stdio.h>
int printSum(int a, int b, int c);
int main()
{
      int a, b, c;
    printf("enter the numbers for a b c:");
    scanf("%d %d %d", &a, &b, &c);
    printSum(a,b,c);
    return 0;
}
int printSum(int a, int b, int c)
{    
    int sum=a+b+c;
    printf("the sum of %d %d %d: %d", a, b, c, sum);
    return sum;
}
