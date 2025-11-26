#include <stdio.h>

int main() {
    long num;
    char str[50];

    printf("Enter a long number: ");
    scanf("%ld", &num);

    sprintf(str, "%ld", num);  // convert long to string
    printf("Long as string: %s\n", str);

    return 0;
}

