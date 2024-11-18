//recursion to find sum of 2 numbers
#include <stdio.h>
int add(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return add(a+1, b-1);
    }
}
int main() {
    int num1, num2, sum;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    sum = add(num1, num2);
    
    printf("The sum of %d and %d is %d\n", num1, num2, sum);
    return 0;
}
