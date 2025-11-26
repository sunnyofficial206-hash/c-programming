#include <stdio.h>

int main() {
    int n;
    float sum = 0.0, average;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i]; // Add each element to sum
    }

    average = sum / n; // Calculate average

    printf("Average of the array elements = %.2f\n", average);

    return 0;
}

