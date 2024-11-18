//reverse a string using recursion
#include <stdio.h>
void reverseString(char str[], int start, int end) {
    char temp;
    if (start >= end) {
        return;
    }
    temp = str[start];
    str[start] = str[end];
    str[end] = temp;
    reverseString(str, start + 1, end - 1);
}
int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
    }
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    reverseString(str, 0, length - 1);

    printf("Reversed string: %s\n", str);
    return 0;
}
