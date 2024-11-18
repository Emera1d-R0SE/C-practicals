//finding the largest element of the array using recursion.
#include <stdio.h>
int main() {
    int n;
    printf("enter size..: ");
    scanf("%d", &n);
    int arr[n];
    printf("enter elements: ");
    for(int i=0;i<n;i++){
    scanf("%d", &arr[i]);}

    printf("The largest element in the array is %d", findLargest(arr,n));

    return 0;
}
int findLargest(int arr[], int n) {
    if (n == 1) {
        return arr[0];
    }
    if (arr[n - 1] > findLargest(arr, n-1)) {
        return arr[n - 1];
    } else {
        return findLargest(arr, n-1);
    }
}
