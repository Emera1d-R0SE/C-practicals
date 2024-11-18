//program to insertion of an element
#include<stdio.h>
void function_insertion(int pos, int arr[], int size, int ele);
int main()
{
    int arr[100], i, pos, size, ele;
    printf("enter the size of the array..: ");                     
    scanf("%d",&size);
     printf("enter the elements of the array: ");                
    for(i=0;i<=size-1;i++){
    scanf("%d",&arr[i]);}
    printf("enter the position of array to insert element: ");     
    scanf("%d",&pos);
    printf("enter the element u want to add: ");
    scanf("%d",&ele);
    function_insertion(pos, arr, size, ele);
return 0;
}
void function_insertion(int pos, int arr[], int size, int ele)
{
  for(int i=size-1;i>=pos;i--){
    arr[i+1]=arr[i];
  }
  arr[pos]=ele;
  size++;
  printf("array after adding element: \n");
  for(int i=0;i<=size-1; i++){
    printf("%d \n", arr[i]);
  }
}
