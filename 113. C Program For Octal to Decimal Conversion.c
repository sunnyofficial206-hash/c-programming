#include <stdio.h>
#include <stdlib.h>

int main() {
    char octal[20];
    int decimal;

    printf("Enter an octal number: ");
    scanf("%s", octal);

    decimal = strtol(octal, NULL, 8);  // convert octal string to decimal
    printf("Decimal equivalent: %d\n", decimal);

    return 0;
}

