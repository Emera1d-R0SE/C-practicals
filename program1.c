//c prgram to find ascii value of a character
#include <stdio.h>
int ascii(int ch);
int main()
{
char ch;
printf("enter the charcter to find ascii value: ");
scanf("%c",&ch);
printf("the ascii value of %c is %d\n", ch, ascii(ch));
return 0;
}
int ascii(int ch)
{
    return (int)ch;
}
