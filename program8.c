//Remove Duplicate Elementsusing functions
#include<stdio.h>
int removeDuplicates(int arr[], int n)
{
    if(n==0||n==1)
        return n;
        int temp[n];
        int j=0;
        for(int i=0; i<n-1; i++)
        {
            if(arr[i]!=arr[i+1]){
                temp[j++]=arr[i];
            }
        }
        temp[j++]=arr[n-1];
        for(int i=0; i<j; i++)
        {
            arr[i]=temp[i];
        }
         return j;  
}
int main()
{
    int n;
    printf("enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("enter the elements (sorted): ");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int newSize=removeDuplicates(arr, n);
    printf("array after removing duplicates: ");
    for(int i=0; i<newSize; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
