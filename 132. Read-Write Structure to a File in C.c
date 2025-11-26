#include <stdio.h>
#include <stdlib.h>

struct Student {
    int id;
    char name[50];
    float marks;
};

int main() {
    struct Student s1 = {101, "Alice", 85.5};
    struct Student s2;

    FILE *fp;

    // Write structure to file
    fp = fopen("student.dat", "wb");
    if(fp == NULL) {
        perror("Unable to open file");
        return 1;
    }
    fwrite(&s1, sizeof(struct Student), 1, fp);
    fclose(fp);

    // Read structure from file
    fp = fopen("student.dat", "rb");
    if(fp == NULL) {
        perror("Unable to open file");
        return 1;
    }
    fread(&s2, sizeof(struct Student), 1, fp);
    fclose(fp);

    // Display read data
    printf("ID: %d, Name: %s, Marks: %.2f\n", s2.id, s2.name, s2.marks);

    return 0;
}

