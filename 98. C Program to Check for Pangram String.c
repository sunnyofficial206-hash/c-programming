#include <stdio.h>
#include <ctype.h>  // for tolower()
#include <string.h>

int main() {
    char str[500];
    int alphabet[26] = {0};  // To track each letter
    int index, flag = 1;

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Check each character
    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {  // Check if alphabet
            index = tolower(str[i]) - 'a';  // Map a/A -> 0, b/B -> 1
            alphabet[index] = 1;            // Mark as present
        }
    }

    // Check if all letters are present
    for (int i = 0; i < 26; i++) {
        if (alphabet[i] == 0) {
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("The string is a pangram.\n");
    else
        printf("The string is not a pangram.\n");

    return 0;
}

