#include <stdio.h>

int main() {
    int decimal;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    printf("Hexadecimal equivalent: %X\n", decimal);  // %X prints hex in uppercase

    return 0;
}

