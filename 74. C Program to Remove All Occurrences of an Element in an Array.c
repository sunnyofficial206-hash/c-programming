#include <stdio.h>

int main() {
    int n, element;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to remove: ");
    scanf("%d", &element);

    int j = 0; // Index for the new array without the element

    // Remove occurrences
    for (int i = 0; i < n; i++) {
        if (arr[i] != element) {
            arr[j] = arr[i];
            j++;
        }
    }

    // Print array after removal
    printf("Array after removing %d:\n", element);
    for (int i = 0; i < j; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}

