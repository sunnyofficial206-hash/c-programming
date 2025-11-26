
#include <stdio.h>

int main() {
    char ch;
    int num;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    num = (int)ch;  // convert char to int (ASCII value)
    printf("Character as integer (ASCII): %d\n", num);

    return 0;
}
