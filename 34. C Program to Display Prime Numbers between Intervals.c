#include <stdio.h>

int main() {
    int low, high, i, j, flag;
    printf("Enter two numbers (intervals): ");
    scanf("%d %d", &low, &high);

    if (low > high) {
        int temp = low;
        low = high;
        high = temp;
    }
    printf("Prime numbers between %d and %d are:\n", low, high);

    for (i = low; i <= high; i++) {
        if (i <= 1)
            continue;
        flag = 0;
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            printf("%d ", i);
    }
    printf("\n");
    return 0;
}
