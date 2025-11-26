#include <stdio.h>
#include <stdlib.h>

int main() {
    char source[100], dest[100];
    FILE *src, *dst;
    char ch;

    printf("Enter source file name: ");
    scanf("%s", source);
    printf("Enter destination file name: ");
    scanf("%s", dest);

    // Open source file in read mode
    src = fopen(source, "r");
    if(src == NULL) {
        perror("Error opening source file");
        return 1;
    }

    // Open destination file in append mode
    dst = fopen(dest, "a");
    if(dst == NULL) {
        perror("Error opening destination file");
        fclose(src);
        return 1;
    }

    // Copy content from source to destination
    while((ch = fgetc(src)) != EOF) {
        fputc(ch, dst);
    }

    printf("Content appended successfully.\n");

    fclose(src);
    fclose(dst);
    return 0;
}

