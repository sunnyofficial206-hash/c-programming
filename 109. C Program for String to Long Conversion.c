#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[50];
    long num;

    printf("Enter a number as string: ");
    scanf("%s", str);

    num = strtol(str, NULL, 10);  // convert string to long
    printf("String as long: %ld\n", num);

    return 0;
}

