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

    // Open destination file in write mode
    dst = fopen(dest, "w");
    if(dst == NULL) {
        perror("Error creating destination file");
        fclose(src);
        return 1;
    }

    // Read from source and write to destination
    while((ch = fgetc(src)) != EOF) {
        fputc(ch, dst);
    }

    printf("Content copied successfully.\n");

    fclose(src);
    fclose(dst);
    return 0;
}

