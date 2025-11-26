#include <stdio.h>

// Function to calculate determinant of a matrix
int determinant(int matrix[10][10], int n) {
    int det = 0;

    if (n == 1) {
        return matrix[0][0];
    } else if (n == 2) {
        return (matrix[0][0]*matrix[1][1] - matrix[0][1]*matrix[1][0]);
    } else {
        int temp[10][10];
        int sign = 1;

        for (int f = 0; f < n; f++) {
            int subi = 0; // row index for temp
            for (int i = 1; i < n; i++) {
                int subj = 0; // column index for temp
                for (int j = 0; j < n; j++) {
                    if (j == f) continue;
                    temp[subi][subj] = matrix[i][j];
                    subj++;
                }
                subi++;
            }
            det += sign * matrix[0][f] * determinant(temp, n - 1);
            sign = -sign;
        }
    }

    return det;
}

int main() {
    int n;
    int matrix[10][10];

    printf("Enter the order of the square matrix: ");
    scanf("%d", &n);

    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);

    int det = determinant(matrix, n);
    printf("Determinant of the matrix is: %d\n", det);

    return 0;
}

