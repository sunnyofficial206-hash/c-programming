#include <stdio.h>

int main() {
    int n;
    printf("Enter the order of the square matrix: ");
    scanf("%d", &n);

    int matrix[n][n];
    int primarySum = 0, secondarySum = 0;

    // Input elements of the matrix
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);

    // Compute sum of diagonals
    for (int i = 0; i < n; i++) {
        primarySum += matrix[i][i];           // Primary diagonal
        secondarySum += matrix[i][n - 1 - i]; // Secondary diagonal
    }

    printf("Sum of primary diagonal = %d\n", primarySum);
    printf("Sum of secondary diagonal = %d\n", secondarySum);

    return 0;
}

