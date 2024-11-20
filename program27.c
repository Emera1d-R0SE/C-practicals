//C Program to Count the Number of Vowels, Consonants and so on
#include<stdio.h>
#include<string.h>
int vowelcounts(char str[])
{
    int vowels=0;
    for(int i=0; str[i]!='\0'; i++)
    {
       char ch=tolower(str[i]);
       if(ch=='a'|| ch=='e'||ch==' i'||ch=='o'||ch=='u')
        {
            vowels++;
        }
    }
    return vowels;
}
int countconsonants(char str[])
{
    int consonants=0;
    for(int i=0; str[i]!='\0'; i++)
    {
        char ch=tolower(str[i]);
        if(isalpha(ch)&& !(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'))
         {
            consonants++;
         }
    } 
    return consonants; 
}
int countDigits(char str[])
{
    int digits=0;
    for(int i=0; str[i]!='\0'; i++)
    {
        if(isdigit(str[i]))
        {
            digits++;
        }
    }
    return digits;
}
int countspecial(char str[]){
    int special=0;
    for(int i=0; str[i]!='\0'; i++)
    {
        if(!isalpha(str[i])&&!isdigit(str[i]))
        {
            special++;
        }
    }
    return special;
}
int main()
{
    char str[100];
    printf("enter a string:");
    scanf("%s", &str);
    int vowels=vowelcounts(str);
    int consonants=countconsonants(str);
    int digits=countDigits(str);
    int special=countspecial(str);
    printf("vowels : %d\n", vowels);
     printf("consonants : %d\n", consonants);
      printf("digits : %d\n", digits);
       printf("special characters : %d\n", special);
       return 0;
}
