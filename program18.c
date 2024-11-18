//Program to find Sum of Digits using functions
#include<stdio.h>
int SumofDigits(int num)
{
    int sum=0;
    while(num!=0)
    {
        sum+=num%10;
        num/=10;
    }
    return sum;
}
int main()
{
    int num;
    printf("enter a number:");
    scanf("%d", &num);
    int results= SumofDigits( num);
    printf("the sum of the digit of %d is: %d", num, results);
    return 0;
}
