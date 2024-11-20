//C Program to Remove all Characters in a String Except Alphabets
#include<stdio.h>
#include<string.h>
void nonalpha(char str[])
{
    int i=0, j=0;
    while(str[i]!='\0'){
        if(isalpha(str[i]))
        {
            str[j++]=str[i];
        }
        i++;
    }
    str[j]='\0';
}
int main()
{
    char str[100];
    printf("enter the string: ");
    scanf("%s", &str);
    nonalpha(str);
    printf("string is: %s\n", str);
    return 0;
}
