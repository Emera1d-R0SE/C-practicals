//program to Delete Element from Array
#include<stdio.h>
int main()
{
    int arr[100], n, position;
    printf("enter number of elements: ");
    scanf("%d", &n);
    printf("enter elements: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("enter position to delete: ");
    scanf("%d", &position);
    if(position<0 || position>=n)
    {
        printf("Invalid position!\n");
    }
    else{
        deleteElement(arr, &n, position);
        printf("Array after deletion: ");
        for(int i=0; i<n; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    return 0;
}
void deleteElement(int arr[], int *n, int position){
    for(int i=position; i<*n-1; i++)
    {
        arr[i]=arr[i+1];
    }
    (*n)--;
}
