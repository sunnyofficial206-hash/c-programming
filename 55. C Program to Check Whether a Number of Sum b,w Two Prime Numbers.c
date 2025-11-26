#include <stdio.h>

// Function to check prime
int isPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int num, flag = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 2; i <= num / 2; i++) {
        if (isPrime(i) && isPrime(num - i)) {
            printf("%d = %d + %d\n", num, i, num - i);
            flag = 1;
        }
    }

    if (!flag) {
        printf("%d cannot be expressed as sum of two prime numbers.\n", num);
    }

    return 0;
}

