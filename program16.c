//Fibonacci Series Program using c
#include<stdio.h>
int main()
{
    int num1=0, num2=1, temp, n=10;
    printf("fibbonacci series:%d %d", num1, num2 );
    int fibonacci();
    for(int i=3; i<=n; ++i)
    {
        temp=num1+num2;
        printf("%d",temp);
        num1=num2;
        num2=temp;
    }
    return 0;
}
