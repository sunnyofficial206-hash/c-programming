#include <stdio.h>

int main() {
    int num, s, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    s= num * num;
    for (; s!= 0; s= s/10) {
        sum = sum + (s% 10);
    }
    if (sum == num)
        printf("%d is a Neon Number.\n", num);
    else
        printf("%d is NOT a Neon Number.\n", num);

    return 0;
}
