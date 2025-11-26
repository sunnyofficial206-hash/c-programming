#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int len, flag = 1;

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    len = strlen(str);

    // Check palindrome
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            flag = 0; // Not a palindrome
            break;
        }
    }

    if (flag)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}

