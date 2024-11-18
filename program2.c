//Reverse an Array
#include<stdio.h>
void reverse(int arr[], int size);           
int main()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);                     
    int arr[size];
    printf("Enter elements of the array: ");  
    for(int i=0;i<size;i++)                     
    {
    scanf("%d",&arr[i]);                    
    }
  reverse(arr, size);                       
    return 0;
}
void reverse(int arr[], int size)           
{
    printf("reverse of the array: \n");
    for(int i=size-1;i>=0;i--){             
        printf("%d \n", arr[i]);            
    }
} 
