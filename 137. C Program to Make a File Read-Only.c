
#include <stdio.h>
#include <sys/stat.h>

int main() {
    char filename[100];
    printf("Enter the file name: ");
    scanf("%s", filename);

    // Set file permissions to read-only (owner)
    if(chmod(filename, S_IRUSR) == 0) {
        printf("File is now read-only.\n");
    } else {
        perror("Error setting read-only");
    }

    return 0;
}
