#include <stdio.h>
#include <ctype.h>  // for isspace()

int main() {
    char str[200];

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Print first letters
    printf("First letters of each word: ");

    int i = 0;

    // Skip leading spaces
    while (str[i] != '\0') {
        // If it's the first character of the string or previous character is space
        if (i == 0 && str[i] != ' ') {
            printf("%c ", str[i]);
        } else if (str[i] != ' ' && str[i - 1] == ' ') {
            printf("%c ", str[i]);
        }
        i++;
    }

    printf("\n");

    return 0;
}

