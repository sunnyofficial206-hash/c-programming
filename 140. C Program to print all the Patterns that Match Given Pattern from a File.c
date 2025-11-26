#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char filename[100], pattern[100], line[256];
    FILE *fp;

    printf("Enter file name: ");
    scanf("%s", filename);
    printf("Enter pattern to search: ");
    scanf(" %[^\n]", pattern);

    fp = fopen(filename, "r");
    if(fp == NULL) {
        perror("Error opening file");
        return 1;
    }

    printf("\nLines containing the pattern \"%s\":\n", pattern);
    while(fgets(line, sizeof(line), fp)) {
        if(strstr(line, pattern) != NULL) {  // check if pattern exists in line
            printf("%s", line);
        }
    }

    fclose(fp);
    return 0;
}

