#include <stdio.h>

// Define complex number structure
struct Complex {
    float real;
    float imag;
};

// Function to add two complex numbers
struct Complex addComplex(struct Complex a, struct Complex b) {
    struct Complex sum;
    sum.real = a.real + b.real;
    sum.imag = a.imag + b.imag;
    return sum;
}

int main() {
    struct Complex c1, c2, sum;

    // Input two complex numbers
    printf("Enter real and imaginary part of first complex number: ");
    scanf("%f %f", &c1.real, &c1.imag);

    printf("Enter real and imaginary part of second complex number: ");
    scanf("%f %f", &c2.real, &c2.imag);

    sum = addComplex(c1, c2);

    printf("Sum = %.2f + %.2fi\n", sum.real, sum.imag);
    return 0;
}

