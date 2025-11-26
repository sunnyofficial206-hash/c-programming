#include <stdio.h>

int main() {
    int a, b, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    for (lcm = (a > b ? a : b); ; lcm++) {
        if (lcm % a == 0 && lcm % b == 0) {
            printf("LCM of %d and %d is %d\n", a, b, lcm);
            break;
        }
    }

    return 0;
}
