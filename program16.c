//Fibonacci Series Program using c
#include<stdio.h>
int main()
{
    int a=0, b=1, temp, n=10;
    printf("fibbonacci series:%d %d", a, b );
    int fibonacci();
    for(int i=3; i<=n; ++i)
    {
        temp=a+b;
        printf("%d",temp);
        a=b;
        b=temp;
    }
    return 0;
}
