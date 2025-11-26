#include <stdio.h>
#include <stdbool.h>

int main() {
    bool flag;
    printf("Enter 0 (false) or 1 (true): ");
    scanf("%d", &flag);

    printf("Boolean as string: %s\n", flag ? "true" : "false");

    return 0;
}

