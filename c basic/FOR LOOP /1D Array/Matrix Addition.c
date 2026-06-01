#include <stdio.h>

void inputMatrix(int rows, int cols, int matrix[10][10]) {
    int i, j;
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void addMatrix(int rows, int cols, int a[10][10], int b[10][10], int result[10][10]) {
    int i, j;
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            result[i][j] = a[i][j] + b[i][j];
        }
    }
}

void displayMatrix(int rows, int cols, int matrix[10][10]) {
    int i, j;
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;
    int A[10][10], B[10][10], Sum[10][10];

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter first matrix:\n");
    inputMatrix(rows, cols, A);

    printf("Enter second matrix:\n");
    inputMatrix(rows, cols, B);

    addMatrix(rows, cols, A, B, Sum);

    printf("Sum Matrix:\n");
    displayMatrix(rows, cols, Sum);

    return 0;
}
