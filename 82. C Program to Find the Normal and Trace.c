#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Enter the order of the square matrix: ");
    scanf("%d", &n);

    int matrix[n][n];
    double norm = 0;
    int trace = 0;

    // Input elements of the matrix
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);

    // Calculate trace and norm
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            norm += matrix[i][j] * matrix[i][j]; // sum of squares
            if (i == j)
                trace += matrix[i][j]; // sum of diagonal elements
        }
    }

    norm = sqrt(norm); // Euclidean norm

    printf("Trace of the matrix = %d\n", trace);
    printf("Norm of the matrix = %.2lf\n", norm);

    return 0;
}

