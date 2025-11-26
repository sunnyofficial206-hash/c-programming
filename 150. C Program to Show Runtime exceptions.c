#include <stdio.h>
#include <stdlib.h>

int main() {
    int a = 10, b = 0;
    int *ptr = NULL;
    int arr[5] = {1,2,3,4,5};

    // 1. Division by zero
    printf("1. Division by zero:\n");
    // Uncomment to see runtime error
    // int c = a / b;
    // printf("Result: %d\n", c);

    // 2. Null pointer dereference
    printf("\n2. Null pointer dereference:\n");
    // Uncomment to see runtime error
    // printf("%d\n", *ptr);

    // 3. Array out-of-bounds
    printf("\n3. Array out-of-bounds:\n");
    // Uncomment to see runtime error (may crash or print garbage)
    // printf("%d\n", arr[10]);

    printf("\nNote: Uncomment each section to see runtime exceptions.\n");

    return 0;
}

