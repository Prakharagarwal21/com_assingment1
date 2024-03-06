//Write a C program to delete an element from an array at a specified p.
#include <stdio.h>

int main() {
    int arr[100], s, p, i;

    printf("Enter the size of the array: ");
    scanf("%d", &s);

    printf("Enter %d elements:\n", s);
    for(i = 0; i < s; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the p of the element to delete (1 to %d): ", s);
    scanf("%d", &p);

    if(p < 1 || p > s) {
        printf("Invalid p!\n");
        return 1;
    }
    for(i = p - 1; i < s - 1; i++) {
        arr[i] = arr[i + 1];
    }
    s--;

    printf("Array after deletion:\n");
    for(i = 0; i < s; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
