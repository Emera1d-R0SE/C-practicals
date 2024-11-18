//Palindrome Program using functions
#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    printf("enter the character:");
    scanf("%s", str);
    if(palindrome(str))
    {
        printf("%s is a Palindrome\n", str);
    }
    else{
        printf("%s is not a palindrome", str);
    }
    return 0;
}
int palindrome(char str[])
{
   int Length=strlen(str);
   int start=0;
   int end= Length-1;
   while(end>start)
   {
       if(str[start]!=str[end])
       {
        return 0;
       }
       start++;
       end--;
   }
    return 1;
}
