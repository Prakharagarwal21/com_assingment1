//Write a C program to perform matrix multiplication.#include <stdio.h>

#define MAX_SIZE 100

void matrixMultiplication(int mat1[][MAX_SIZE], int mat2[][MAX_SIZE], int result[][MAX_SIZE], int rows1, int cols1, int cols2) {
    int i, j, k;

    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for (k = 0; k < cols1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

int main() {
    int mat1[MAX_SIZE][MAX_SIZE], mat2[MAX_SIZE][MAX_SIZE], result[MAX_SIZE][MAX_SIZE];
    int rows1, cols1, rows2, cols2, i, j;

    printf("Enter the number of rows of the first matrix: ");
    scanf("%d", &rows1);
    printf("Enter the number of columns of the first matrix: ");
    scanf("%d", &cols1);

    printf("Enter the elements of the first matrix:\n");
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols1; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter the number of rows of the second matrix: ");
    scanf("%d", &rows2);
    printf("Enter the number of columns of the second matrix: ");
    scanf("%d", &cols2);

    if (cols1 != rows2) {
        printf("Matrix multiplication not possible. Number of columns of the first matrix should be equal to the number of rows of the second matrix.\n");
        return 1;
    }

    printf("Enter the elements of the second matrix:\n");
    for (i = 0; i < rows2; i++) {
        for (j = 0; j < cols2; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    matrixMultiplication(mat1, mat2, result, rows1, cols1, cols2);

    printf("Result of matrix multiplication:\n");
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
