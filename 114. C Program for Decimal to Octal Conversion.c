#include <stdio.h>

int main() {
    int decimal;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    printf("Octal equivalent: %o\n", decimal);  // %o prints octal

    return 0;
}

