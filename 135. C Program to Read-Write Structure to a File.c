#include <stdio.h>
#include <stdlib.h>

struct Student {
    int id;
    char name[50];
    float marks;
};

int main() {
    struct Student s1, s2;
    FILE *fp;

    // Input student data
    printf("Enter ID, Name, Marks: ");
    scanf("%d", &s1.id);
    scanf(" %[^\n]", s1.name);
    scanf("%f", &s1.marks);

    // Write structure to file
    fp = fopen("student.dat", "wb");
    if(fp == NULL) {
        perror("Cannot open file");
        return 1;
    }
    fwrite(&s1, sizeof(struct Student), 1, fp);
    fclose(fp);

    // Read structure from file
    fp = fopen("student.dat", "rb");
    if(fp == NULL) {
        perror("Cannot open file");
        return 1;
    }
    fread(&s2, sizeof(struct Student), 1, fp);
    fclose(fp);

    // Display read data
    printf("\nRead from file:\nID: %d, Name: %s, Marks: %.2f\n",
           s2.id, s2.name, s2.marks);

    return 0;
}

