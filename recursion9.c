//is prime or composite
#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num <= 1) {
        printf("%d is not a prime number.\n", num);
    } else if (isPrime(num, num / 2)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is a composite number.\n", num);
    }
    return 0;
}
int isPrime(int num, int divisor) {
  
    if (divisor == 1) {
        return 1; 
    }
    if (num % divisor == 0) {
        return 0;
    }
    return isPrime(num, divisor - 1);
}
