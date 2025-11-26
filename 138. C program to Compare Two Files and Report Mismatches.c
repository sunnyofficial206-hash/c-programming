#include <stdio.h>
#include <stdlib.h>

int main() {
    char file1[100], file2[100];
    FILE *fp1, *fp2;
    char ch1, ch2;
    int pos = 0, mismatch = 0;

    printf("Enter first file name: ");
    scanf("%s", file1);
    printf("Enter second file name: ");
    scanf("%s", file2);

    fp1 = fopen(file1, "r");
    fp2 = fopen(file2, "r");

    if(fp1 == NULL || fp2 == NULL) {
        perror("Error opening file");
        return 1;
    }

    while(1) {
        ch1 = fgetc(fp1);
        ch2 = fgetc(fp2);
        pos++;

        if(ch1 == EOF || ch2 == EOF)
            break;

        if(ch1 != ch2) {
            printf("Mismatch at position %d: '%c' != '%c'\n", pos, ch1, ch2);
            mismatch++;
        }
    }

    // Check if files are of different length
    while(fgetc(fp1) != EOF) { mismatch++; pos++; printf("Extra character in first file at position %d\n", pos);}
    while(fgetc(fp2) != EOF) { mismatch++; pos++; printf("Extra character in second file at position %d\n", pos);}

    if(mismatch == 0)
        printf("Files are identical.\n");
    else
        printf("Total mismatches: %d\n", mismatch);

    fclose(fp1);
    fclose(fp2);
    return 0;
}

