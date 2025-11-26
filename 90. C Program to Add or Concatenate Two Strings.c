#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], result[200];

    // Input two strings
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove newline character if present
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    // Concatenate strings
    strcpy(result, str1);   // Copy first string to result
    strcat(result, str2);   // Append second string

    // Print concatenated string
    printf("Concatenated string: %s\n", result);

    return 0;
}

