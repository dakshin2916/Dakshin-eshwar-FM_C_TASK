#include <stdio.h>

void swapAdjacent(int *arr, int n) {
    int i, temp;

    // Traverse array in steps of 2
    for (i = 0; i < n - 1; i += 2) {
        // Swap using pointer arithmetic
        temp = *(arr + i);
        *(arr + i) = *(arr + i + 1);
        *(arr + i + 1) = temp;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array:");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    swapAdjacent(arr, n);

    printf("Array after swapping adjacent elements:");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}