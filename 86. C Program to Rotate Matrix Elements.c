#include <stdio.h>

int main() {
    int rows, cols;

    // Input size of matrix
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int mat[rows][cols];

    // Input matrix elements
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf("%d", &mat[i][j]);

    // Store first element
    int prev = mat[0][0], curr;

    // Rotate top row
    for (int j = 1; j < cols; j++) {
        curr = mat[0][j];
        mat[0][j] = prev;
        prev = curr;
    }

    // Rotate last column
    for (int i = 1; i < rows; i++) {
        curr = mat[i][cols - 1];
        mat[i][cols - 1] = prev;
        prev = curr;
    }

    // Rotate bottom row
    for (int j = cols - 2; j >= 0; j--) {
        curr = mat[rows - 1][j];
        mat[rows - 1][j] = prev;
        prev = curr;
    }

    // Rotate first column
    for (int i = rows - 2; i >= 0; i--) {
        curr = mat[i][0];
        mat[i][0] = prev;
        prev = curr;
    }

    // Print rotated matrix
    printf("Matrix after clockwise rotation by one position:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            printf("%d\t", mat[i][j]);
        printf("\n");
    }

    return 0;
}

