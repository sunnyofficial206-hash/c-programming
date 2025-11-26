#include <stdio.h>

int main() {
    int decimal;
    int binary[32], i = 0;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    if (decimal == 0) {
        printf("Binary: 0\n");
        return 0;
    }

    while (decimal > 0) {
        binary[i++] = decimal % 2;
        decimal /= 2;
    }

    printf("Binary: ");
    for (i = i - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");

    return 0;
}

