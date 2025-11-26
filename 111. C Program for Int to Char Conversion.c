#include <stdio.h>

int main() {
    int num;
    char ch;

    printf("Enter an integer (0-255): ");
    scanf("%d", &num);

    ch = (char)num;  // convert int to char
    printf("Integer as character: %c\n", ch);

    return 0;
}

