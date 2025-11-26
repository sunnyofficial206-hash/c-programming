#include <stdio.h>
#include <string.h>

int main() {
    char str[100], *token;
    char delimiter[] = " "; // split by space

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // remove newline

    token = strtok(str, delimiter);
    while(token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, delimiter);
    }

    return 0;
}

