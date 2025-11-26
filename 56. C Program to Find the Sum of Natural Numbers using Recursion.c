
#include <stdio.h>

// Recursive function to return sum of natural numbers
int sum(int n) {
    if (n == 0)
        return 0;
    else
        return n + sum(n - 1);
}

int main() {
    int n;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("Sum = %d\n", sum(n));

    return 0;
}
