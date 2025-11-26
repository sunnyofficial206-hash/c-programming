#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool isPrime(int num) {
    if(num <= 1) {
        return false;
    }

    for(int i = 2; i * i <= num; i++) {
        if(num % i == 0) {
            return false;
        }
    }
    return true;
}

// Function to display prime numbers in range
void displayPrimes(int start, int end) {
    printf("Prime numbers between %d and %d are:\n", start, end);

    for(int i = start; i <= end; i++) {
        if(isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int start, end;

    printf("Enter the starting number: ");
    scanf("%d", &start);

    printf("Enter the ending number: ");
    scanf("%d", &end);

    if(start > end) {
        printf("Invalid range! Starting number should be less than ending number.\n");
        return 1;
    }

    displayPrimes(start, end);

    return 0;
}
