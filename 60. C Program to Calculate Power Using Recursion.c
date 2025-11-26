
#include <stdio.h>

// Recursive function to calculate power
double power(double base, int exponent) {
    if (exponent == 0)
        return 1;          // Any number ^ 0 = 1
    else if (exponent > 0)
        return base * power(base, exponent - 1);
    else
        return 1 / power(base, -exponent); // Handle negative exponent
}

int main() {
    double base;
    int exponent;

    printf("Enter base: ");
    scanf("%lf", &base);

    printf("Enter exponent: ");
    scanf("%d", &exponent);

    printf("%.2lf ^ %d = %.2lf\n", base, exponent, power(base, exponent));

    return 0;
}
