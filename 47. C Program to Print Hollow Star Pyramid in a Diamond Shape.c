#include <stdio.h>

int main() {
    int rows, i, j, space;

    printf("Enter number of rows (half of diamond): ");
    scanf("%d", &rows);

    // Upper part of diamond
    for(i = 1; i <= rows; i++) {
        // Print spaces
        for(space = i; space < rows; space++) {
            printf(" ");
        }

        // Print stars
        for(j = 1; j <= (2*i - 1); j++) {
            if(j == 1 || j == (2*i - 1)) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    // Lower part of diamond
    for(i = rows - 1; i >= 1; i--) {
        // Print spaces
        for(space = i; space < rows; space++) {
            printf(" ");
        }

        // Print stars
        for(j = 1; j <= (2*i - 1); j++) {
            if(j == 1 || j == (2*i - 1)) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
