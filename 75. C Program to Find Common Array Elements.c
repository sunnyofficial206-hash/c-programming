#include <stdio.h>

int main() {
    int n1, n2;

    // Input sizes of arrays
    printf("Enter size of first array: ");
    scanf("%d", &n1);
    printf("Enter size of second array: ");
    scanf("%d", &n2);

    int arr1[n1], arr2[n2];

    // Input elements of first array
    printf("Enter elements of first array:\n");
    for (int i = 0; i < n1; i++)
        scanf("%d", &arr1[i]);

    // Input elements of second array
    printf("Enter elements of second array:\n");
    for (int i = 0; i < n2; i++)
        scanf("%d", &arr2[i]);

    printf("Common elements are: ");

    // Find common elements
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                printf("%d ", arr1[i]);
                arr2[j] = -1; // Avoid counting duplicates
                break;
            }
        }
    }

    printf("\n");
    return 0;
}

