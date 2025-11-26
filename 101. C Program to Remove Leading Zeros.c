#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    // Input string
    printf("Enter a number with leading zeros: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline if present
    str[strcspn(str, "\n")] = '\0';

    int i = 0;

    // Skip all leading zeros
    while (str[i] == '0' && str[i + 1] != '\0') {
        i++;
    }

    // Print string without leading zeros
    printf("Number after removing leading zeros: %s\n", &str[i]);

    return 0;
}

