//Sort Array Elements using functions
#include<stdio.h>
int main()
{
    int n;
    printf("enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("enter the elements: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    selectionSort(arr, n);
    printf("sorted array: ");
    for(int i=0; i<n; i++)
{
    printf("%d ", arr[i]);
}
    printf("\n");
    return 0;
}
void selectionSort(int arr[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        int min_idx=i;
        for(int j=i+1; j<n; j++)
        {
            if(arr[j]<arr [min_idx])
            {
                    min_idx=j;
            }
        }
        int temp=arr[min_idx];
        arr[min_idx]=arr[i];
        arr[i]=temp;
    }
}
