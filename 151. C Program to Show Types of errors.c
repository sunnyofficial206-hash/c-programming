#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Demonstrating Types of Errors in C\n\n");

    // 1. Compile-time / Syntax Error
    // Uncomment the following line to see a syntax error:
    // printf("Hello World"   // Missing closing parenthesis and semicolon

    // 2. Runtime Error
    printf("Runtime Error Example (division by zero):\n");
    int a = 10, b = 0;
    // Uncomment to see runtime error:
    // int c = a / b;
    // printf("Result: %d\n", c);

    // 3. Logical Error
    printf("\nLogical Error Example:\n");
    int x = 5, y = 10;
    int sum = x - y; // Should be x + y
    printf("Sum of %d and %d (incorrect due to logical error): %d\n", x, y, sum);

    return 0;
}

