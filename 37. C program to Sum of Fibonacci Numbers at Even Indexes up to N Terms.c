#include <stdio.h>

int main() {
    int n, i;
    long long a = 0, b = 1, c;
    long long sum = 0;

    printf("Enter number of terms (N): ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        if (i == 0)
            c = 0;
        else if (i == 1)
            c = 1;
        else {
            c = a + b;
            a = b;
            b = c;
        }
        if (i % 2 == 0) {
            sum += c;
        }
    }

    printf("Sum of Fibonacci numbers at even indexes up to %d terms = %lld\n", n, sum);

    return 0;
}
