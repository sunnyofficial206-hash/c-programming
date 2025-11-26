#include <stdio.h>

int main() {
    FILE *fp;

    // Create a temporary file
    fp = tmpfile();
    if(fp == NULL) {
        perror("Unable to create temporary file");
        return 1;
    }

    // Write data to temporary file
    fprintf(fp, "This is a temporary file.\n");
    fprintf(fp, "It will be deleted automatically when closed.\n");

    // Rewind to read from the beginning
    rewind(fp);

    // Read and display content
    char ch;
    while((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    fclose(fp);  // file is automatically deleted on close
    return 0;
}

