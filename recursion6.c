//power of a number using recursion
#include<stdio.h>
int func_power(int n, int p);
int main()
{
    int num, pow;
    printf("enter a base value: ");
    scanf("%d", &num);
    printf("enter power value: ");
    scanf("%d", &pow);
    printf("power of numner is: %d", func_power(num,pow));

}
int func_power(int n, int p)
{
    if(p==0)
    {
        return 1;
    }
    else{
        return (n*func_power(n, p-1));
    }
}
