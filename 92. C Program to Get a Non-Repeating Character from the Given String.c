#include <stdio.h>
#include <string.h>

#define CHAR_RANGE 256  // Number of ASCII characters

int main() {
    char str[100];
    int count[CHAR_RANGE] = {0};

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline if present
    str[strcspn(str, "\n")] = '\0';

    // Count occurrences of each character
    for (int i = 0; str[i] != '\0'; i++) {
        count[(unsigned char)str[i]]++;
    }

    // Find first non-repeating character
    char result = '\0';
    for (int i = 0; str[i] != '\0'; i++) {
        if (count[(unsigned char)str[i]] == 1) {
            result = str[i];
            break;
        }
    }

    if (result)
        printf("First non-repeating character: %c\n", result);
    else
        printf("No non-repeating character found.\n");

    return 0;
}

