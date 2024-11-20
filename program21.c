//Print all Armstrong numbers between 2 intervals
#include<stdio.h>
#include<math.h>
int isArmstrong(int num)
{
    int originalNum=num, sum=0, n=0;
    while(originalNum!=0)
    {
        originalNum/=10;
        n++;
    }
    originalNum=num;
    while (originalNum!=0)
    {
        int remainder=originalNum % 10;
        sum+=pow(remainder, n);
        originalNum /=10;
    }
    return (sum==num);
}
int main()
{
    int start, end;
    printf("enter the start:");
    scanf("%d", &start);
    printf("enter the end:");
    scanf("%d", &end);
    printf("The armstrong numbers between %d & %d are:\n", start, end);
    for(int i=start; i<=end; i++)
    {
        if(isArmstrong(i))
        {
            printf("%d\n", i);
        }
    }
    return 0;
}
