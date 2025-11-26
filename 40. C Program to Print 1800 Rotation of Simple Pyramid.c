#include <stdio.h>

int main() {
    int rows, i, j, space;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("\nInverted Star Pyramid (180° Rotation):\n");
    for(i = rows; i >= 1; i--) {
        // Print spaces
        for(space = 1; space <= rows - i; space++) {
            printf(" ");
        }
        // Print stars
        for(j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
