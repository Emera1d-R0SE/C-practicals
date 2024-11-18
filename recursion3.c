//fibbonacci using recursion
#include<stdio.h>
int main()
{
    int n;
   for(int i=0; i<n; i++){
    printf("%d ", fibonacci(i));
 }
 printf("\n");
 return 0;
}
int fibonacci(int n)
{
    if(n<=1)
    {
        return n;
    }
    else
    {
        return fibonacci(n-1)+fibonacci(n-2);
    }
}
