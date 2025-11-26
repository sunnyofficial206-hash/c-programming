#include <stdio.h>

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements (sorted array)
    printf("Enter %d elements in sorted order:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    if (n == 0) {
        printf("Array is empty.\n");
        return 0;
    }

    int j = 0; // Index of last unique element

    // Traverse the array
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[j]) {
            j++;
            arr[j] = arr[i];
        }
    }

    // Print array without duplicates
    printf("Array after removing duplicates:\n");
    for (int i = 0; i <= j; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

