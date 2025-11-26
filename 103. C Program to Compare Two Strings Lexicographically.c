#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    int res = strcmp(str1, str2);
    if(res == 0) printf("Equal\n");
    else if(res < 0) printf("First string is smaller\n");
    else printf("First string is greater\n");

    return 0;
}

