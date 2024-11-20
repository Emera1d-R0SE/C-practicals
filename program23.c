//C Program to Convert Binary Number to Decimal and vice-versa
#include<stdio.h>
#include<string.h>
int binarytodecimal(char binary[])
{
    int decimal=0;
    int length=strlen(binary);
    for(int i=0; i<length; i++)
    {
        if(binary[length-i-1]=='1')
        {
            decimal+=pow(2,i);
        }
    }
    return decimal;
}
void decimaltobinary(int decimal, char binary[])
{         int i=0;
          while(decimal>0){
        binary[i]=(decimal%2)+'0';
        decimal /=2;
        i++;
    }
    binary[i]='\0';
    int length=i;
    for(int j=0; j<length/2; j++)
    {
        char temp=binary[j];
        binary[j]=binary[length-j-1];
        binary[length-j-1]=temp;
    }
}
int main()
{
    int choice;
    printf("choose an option:\n");
    printf("1. convert binary to decimal:\n");
    printf("2. convert decimal to binary:\n");
    printf("enter your choice:");
    scanf("%d", &choice);
    if(choice==1)
    {
        char binary[65];
        printf("enter a binary number:");
        scanf("%s", &binary);
        int decimal=binarytodecimal(binary);
        printf("The decimal equivqlent of %s is %d\n", binary, decimal);
    }else if(choice==2)
    {
        int decimal;
        char binary[65];
        printf("enter a decimal number:");
        scanf("%d", &decimal);
        decimaltobinary(decimal, binary);
        printf("the binary equivalent of %d is %s\n", decimal, binary);
    }
    else{
        printf("invalid choice!\n");
    }
    return 0;
}
