#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter the number: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Please enter a positive number.\n");
    } else {
        for (int i = 1; i <= n; i++) {
            sum += i;
        }
        printf("Sum of natural numbers from 1 to %d is %d\n", n, sum);
    }
    return 0;
}
