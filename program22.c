//Prime numbers upto Limit
#include<stdio.h>
int Prime(int limit);
int main()
{
  int limit;
  printf("enter the limit: ");
  scanf("%d", &limit);
  Prime(limit);
  return 0;
}
int Prime(int limit)
{
    int count=0;
    for(int j=2; j<=limit; j++)
    {count= 0;
         for(int i=1; i<=j; i++)
         {
            if(j%i==0)
            {
                count ++;
            }
         }
         if(count==2)
         {
            printf("%d\n", j);
         }
    }
}
