//Write a C program to merge two sorted arrays into a single sorted array.
#include <stdio.h>

void mergeArrays(int arr1[], int s1, int arr2[], int s2, int r[]) {
    int i = 0, j = 0, k = 0;

    while (i < s1 && j < s2) {
        if (arr1[i] < arr2[j]) {
            r[k++] = arr1[i++];
        } else {
            r[k++] = arr2[j++];
        }
    }

    while (i < s1) {
        r[k++] = arr1[i++];
    }

    while (j < s2) {
        r[k++] = arr2[j++];
    }
}

int main() {
    int arr1[100], arr2[100], r[200];
    int s1, s2, i;

    printf("Enter the s of the first array: ");
    scanf("%d", &s1);
    printf("Enter %d elements in the first array (sorted):\n", s1);
    for (i = 0; i < s1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the s of the second array: ");
    scanf("%d", &s2);
    printf("Enter %d elements in the second array (sorted):\n", s2);
    for (i = 0; i < s2; i++) {
        scanf("%d", &arr2[i]);
    }

    mergeArrays(arr1, s1, arr2, s2, r);

    printf("Merged sorted array:\n");
    for (i = 0; i < s1 + s2; i++) {
        printf("%d ", r[i]);
    }
    printf("\n");

    return 0;
}
