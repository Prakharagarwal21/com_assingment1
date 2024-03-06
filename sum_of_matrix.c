//Write a C program to find the trans of a matrix.
#include <stdio.h>

int main() {
    int a[100][100], trans[100][100];
    int r, c, i, j;

    printf("Enter the number of r of the matrix: ");
    scanf("%d", &r);
    printf("Enter the number of c of the matrix: ");
    scanf("%d", &c);

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            trans[j][i] = a[i][j];
        }
    }

    printf("trans of the a:\n");
    for (i = 0; i < c; i++) {
        for (j = 0; j < r; j++) {
            printf("%d ", trans[i][j]);
        }
        printf("\n");
    }

    return 0;
}
