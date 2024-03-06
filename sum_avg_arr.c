//Write a C program to find the second largest element in an array.
#include <stdio.h>

int main() {
    int arr[100], n, i;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int l = arr[0];
    int sl = arr[1];

    if (sl > l) {
        int temp = l;
        l = sl;
        sl= temp;
    }

    for(i = 2; i < n; i++) {
        if (arr[i] > l) {
            sl = l;
            l = arr[i];
        } else if (arr[i] > sl && arr[i] != l) {
            sl = arr[i];
        }
    }

    printf("The second largest element is: %d\n", sl);

    return 0;
}
