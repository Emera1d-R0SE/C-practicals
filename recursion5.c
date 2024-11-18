//sum of digits
//1234= 1+2+3+4=10
#include<stdio.h>
int func_sum(int num);
int main()
{
    int num;
    printf("enter a number: ");
    scanf("%d", &num);
    printf("the sum of digits: %d", func_sum(num));
}
int func_sum(int n)
{
 if(n==0)
 {
    return 0;
 }
 else{
    return (n%10+func_sum(n/10));
 }
}
