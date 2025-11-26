#include <stdio.h>
#include <string.h>

int main() {
    char str1[200], str2[100];
    int pos;

    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    scanf("%d", &pos);

    char result[300];
    strncpy(result, str1, pos);
    result[pos] = '\0';
    strcat(result, str2);
    strcat(result, str1 + pos);

    printf("%s\n", result);
    return 0;
}

