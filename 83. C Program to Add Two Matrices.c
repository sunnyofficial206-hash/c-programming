#include <stdio.h>

int main() {
    int rows, cols;

    // Input size of matrices
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int mat1[rows][cols], mat2[rows][cols], sum[rows][cols];

    // Input elements of first matrix
    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf("%d", &mat1[i][j]);

    // Input elements of second matrix
    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf("%d", &mat2[i][j]);

    // Add matrices
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            sum[i][j] = mat1[i][j] + mat2[i][j];

    // Print the sum matrix
    printf("Sum of the two matrices:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            printf("%d\t", sum[i][j]);
        printf("\n");
    }

    return 0;
}

