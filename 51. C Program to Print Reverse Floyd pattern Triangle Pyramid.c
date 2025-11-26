#include <stdio.h>

int main() {
    int rows, i, j, number;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    // Calculate starting number
    number = rows * (rows + 1) / 2;

    printf("Reverse Floyd's Triangle:\n");
    for(i = rows; i >= 1; i--) {
        for(j = 1; j <= i; j++) {
            printf("%d ", number);
            number--;
        }
        printf("\n");
    }
    return 0;
}
