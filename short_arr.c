//Write a C program to find the sum of all elements in a a.


#include <stdio.h>

int main() {
    int a[100][100];
    int r, c, i, j, sum = 0;

    printf("Enter the number of r of the a: ");
    scanf("%d", &r);
    printf("Enter the number of c of the a: ");
    scanf("%d", &c);

    printf("Enter the elements of the a:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Calculate the sum of all elements
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            sum += a[i][j];
        }
    }

    printf("Sum of all elements in the a: %d\n", sum);

    return 0;
}
