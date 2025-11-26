#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int index;

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline if present
    str[strcspn(str, "\n")] = '\0';

    // Input index
    printf("Enter the index to get Unicode code point: ");
    scanf("%d", &index);

    int len = strlen(str);

    if (index < 0 || index >= len) {
        printf("Invalid index. Index should be between 0 and %d\n", len - 1);
    } else {
        printf("Character at index %d: %c\n", index, str[index]);
        printf("Unicode code point (ASCII value): %d\n", (unsigned char)str[index]);
    }

    return 0;
}

