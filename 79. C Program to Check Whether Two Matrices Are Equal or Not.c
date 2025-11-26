#include <stdio.h>

int main() {
    int rows1, cols1, rows2, cols2;

    // Input size of first matrix
    printf("Enter number of rows for first matrix: ");
    scanf("%d", &rows1);
    printf("Enter number of columns for first matrix: ");
    scanf("%d", &cols1);

    int mat1[rows1][cols1];

    // Input elements of first matrix
    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < rows1; i++)
        for (int j = 0; j < cols1; j++)
            scanf("%d", &mat1[i][j]);

    // Input size of second matrix
    printf("Enter number of rows for second matrix: ");
    scanf("%d", &rows2);
    printf("Enter number of columns for second matrix: ");
    scanf("%d", &cols2);

    int mat2[rows2][cols2];

    // Input elements of second matrix
    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < rows2; i++)
        for (int j = 0; j < cols2; j++)
            scanf("%d", &mat2[i][j]);

    // Check if dimensions are equal
    if (rows1 != rows2 || cols1 != cols2) {
        printf("Matrices are not equal (different dimensions).\n");
        return 0;
    }

    // Check if elements are equal
    int equal = 1; // Assume equal
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            if (mat1[i][j] != mat2[i][j]) {
                equal = 0;
                break;
            }
        }
        if (!equal) break;
    }

    if (equal)
        printf("Matrices are equal.\n");
    else
        printf("Matrices are not equal.\n");

    return 0;
}

