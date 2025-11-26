#include <stdio.h>

int main() {
    printf("This will be printed.\n");
    return 0;

    // Unreachable code
    printf("This line is unreachable and will never execute.\n");
    int a = 10; // also unreachable

    return 1;  // unreachable
}

