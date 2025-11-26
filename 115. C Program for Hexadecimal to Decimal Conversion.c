#include <stdio.h>
#include <stdlib.h>

int main() {
    char hex[20];
    int decimal;

    printf("Enter a hexadecimal number: ");
    scanf("%s", hex);

    decimal = strtol(hex, NULL, 16);  // convert hex string to decimal
    printf("Decimal equivalent: %d\n", decimal);

    return 0;
}

