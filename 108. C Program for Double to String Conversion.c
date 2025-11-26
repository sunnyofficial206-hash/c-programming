#include <stdio.h>

int main() {
    double num;
    char str[50];

    printf("Enter a double number: ");
    scanf("%lf", &num);

    sprintf(str, "%lf", num);  // convert double to string
    printf("Double as string: %s\n", str);

    return 0;
}

