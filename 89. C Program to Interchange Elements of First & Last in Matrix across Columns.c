#include <stdio.h>

int main() {
    int rows, cols;

    // Input size of matrix
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

    // Interchange first and last elements of each column
    for (int j = 0; j < cols; j++) {
        int temp = mat[0][j];
        mat[0][j] = mat[rows - 1][j];
        mat[rows - 1][j] = temp;
    }

    // Print the updated matrix
    printf("Matrix after interchanging first and last elements of each column:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            printf("%d\t", mat[i][j]);
        printf("\n");
    }

    return 0;
}

