//Largest and Smallest Element in Array
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
    int largest, smallest;
    compareArray(arr, n, &largest, &smallest);
    printf("largest element: %d\n", largest);
    printf("smallest element: %d\n", smallest);
    return 0;
}
void compareArray(int arr[], int n, int*largest, int*smallest)
{
    *largest=arr[0];
    *smallest=arr[0];
    for(int i=1; i<n; i++)
    {
        if(arr[i]> *largest)
        {
            *largest=arr[i];
        }
        if(arr[i]<*smallest){
            *smallest=arr[i];
        }
    }
}
