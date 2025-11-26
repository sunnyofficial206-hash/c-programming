#include <stdio.h>

int main() {
    int rows, cols;

    // Input size of the matrix
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int mat[rows][cols];

    // Input elements of the matrix
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf("%d", &mat[i][j]);

    // Print boundary elements
    printf("Boundary elements of the matrix are:\n");

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i == 0 || i == rows - 1 || j == 0 || j == cols - 1)
                printf("%d ", mat[i][j]);
            else
                printf("  "); // space for inner elements
        }
        printf("\n");
    }

    return 0;
}

