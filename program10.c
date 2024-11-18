//square matrix using functions in c
#include <stdio.h>
void fillMatrix(int matrix[][100], int size);
void printMatrix(int matrix[][100], int size);
int main() {
    int matrix[100][100];
    int size;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &size);
    fillMatrix(matrix, size);
    printMatrix(matrix, size);
    return 0;
}
void fillMatrix(int matrix[][100], int size) {
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}
void printMatrix(int matrix[][100], int size) {
    printf("The matrix is:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
