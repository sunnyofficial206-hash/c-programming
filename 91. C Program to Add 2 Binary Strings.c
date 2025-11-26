#include <stdio.h>
#include <string.h>

int main() {
    char a[100], b[100], sum[101];
    int i, j, k, carry = 0;

    // Input two binary strings
    printf("Enter first binary string: ");
    scanf("%s", a);
    printf("Enter second binary string: ");
    scanf("%s", b);

    int len1 = strlen(a);
    int len2 = strlen(b);

    i = len1 - 1;  // last index of a
    j = len2 - 1;  // last index of b
    k = 0;         // index for sum (will be reversed later)

    // Initialize sum string
    sum[0] = '\0';

    // Add binary strings from right to left
    while (i >= 0 || j >= 0 || carry) {
        int bit1 = (i >= 0) ? a[i] - '0' : 0;
        int bit2 = (j >= 0) ? b[j] - '0' : 0;
        int s = bit1 + bit2 + carry;

        sum[k++] = (s % 2) + '0';  // current bit
        carry = s / 2;             // carry
        i--;
        j--;
    }

    // Reverse sum string
    sum[k] = '\0';
    for (int l = 0; l < k / 2; l++) {
        char temp = sum[l];
        sum[l] = sum[k - l - 1];
        sum[k - l - 1] = temp;
    }

    printf("Sum of binary strings: %s\n", sum);

    return 0;
}

