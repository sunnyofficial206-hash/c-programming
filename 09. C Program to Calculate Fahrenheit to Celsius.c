#include <stdio.h>
int main() {
    float f,c;
    //f=fahrenheit and c=celsius
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &f);
    c = (f - 32) * 5.0 / 9.0;
    printf("Temperature in Celsius: %.3f\n", c);
    return 0;
}
