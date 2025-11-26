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

    src = fopen(source, "r");
    if(src == NULL) {
        perror("Error opening source file");
        return 1;
    }

    dst = fopen(dest, "w");
    if(dst == NULL) {
        perror("Error creating destination file");
        fclose(src);
        return 1;
    }

    // Copy content character by character
    while((ch = fgetc(src)) != EOF) {
        fputc(ch, dst);
    }

    printf("File copied successfully.\n");

    fclose(src);
    fclose(dst);
    return 0;
}

