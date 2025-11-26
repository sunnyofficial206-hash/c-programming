#include <stdio.h>

int main() {
    int n, d;

    // Input size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Input number of rotations
    printf("Enter number of left rotations: ");
    scanf("%d", &d);

    // Normalize rotations if d > n
    d = d % n;

    // Perform left rotation
    for (int i = 0; i < d; i++) {
        int first = arr[0];
        for (int j = 0; j < n - 1; j++) {
            arr[j] = arr[j + 1];
        }
        arr[n - 1] = first;
    }

    // Print rotated array
    printf("Array after %d left rotations:\n", d);
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}

