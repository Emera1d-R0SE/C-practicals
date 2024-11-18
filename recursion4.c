//sum of first n numbers
#include<stdio.h>
int func_sum(int num);
int main()
{int num;
    printf("enter a number..: ");
    scanf("%d", &num);
    printf("%d", func_sum(num));
    return 0;
}
int func_sum(int n)
{
    if(n==0)
    {
      return 0;
    }
    else{
        return n+func_sum(n-1);
    }
}
