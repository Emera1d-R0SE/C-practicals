//recursion to find factorial of a number
#include<stdio.h>
int main(){
int n, num;
printf("enter num.: ");
scanf("%d", &num);
if(num<0)
{
    printf("pl enter positive num to find fact!");
}
else{
    printf("the factorial of %d is: ", num);
}
printf("%d", fact(num));
return 0;
}
int fact(int n)
{
    if(n==0)
    {
     return 1;
    }
    else{
        return n*fact(n-1);
    }
}
