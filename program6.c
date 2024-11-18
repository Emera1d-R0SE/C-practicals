//Sum of N Numbers using Arrays
#include<stdio.h>
int main()
{
    int n, sum=0;
    printf("enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("enter the elements: ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
        sum+=arr[i];
    }
    printf("The sum of elements is: %d\n", sum);
    return 0;
}
