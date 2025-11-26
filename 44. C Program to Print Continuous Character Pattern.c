#include <stdio.h>

int main() {
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    char ch = 'A';

    for(int i = 0; i < rows; i++) {
        // Print spaces
        for(int j = 0; j < rows - i - 1; j++) {
            printf(" ");
        }

        // Print characters
        for(int j = 0; j <= i; j++) {
            printf("%c ", ch++);
        }
        printf("\n");
    }
    return 0;
}
