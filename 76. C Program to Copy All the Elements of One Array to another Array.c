#include <stdio.h>

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr1[n], arr2[n];

    // Input elements of the first array
    printf("Enter elements of the first array:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr1[i]);

    // Copy elements from arr1 to arr2
    for (int i = 0; i < n; i++)
        arr2[i] = arr1[i];

    // Print the second array
    printf("Elements of the second array (copied array):\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr2[i]);
    printf("\n");

    return 0;
}

