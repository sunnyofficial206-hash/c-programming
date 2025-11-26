#include <stdio.h>

int main() {
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for(int i = rows; i >= 1; i--) {
        // Print leading spaces
        for(int j = i; j < rows; j++) {
            printf(" ");
        }

        // Print stars
        for(int j = 1; j <= (2*i - 1); j++) {
            if(i == rows || j == 1 || j == (2*i - 1)) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
