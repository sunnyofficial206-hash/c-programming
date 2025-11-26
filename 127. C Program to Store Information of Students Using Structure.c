#include <stdio.h>

// Define structure for student
struct Student {
    int id;
    char name[50];
    float marks;
};

int main() {
    struct Student s[3];  // array of 3 students
    int n = 3;

    // Input student information
    for(int i = 0; i < n; i++) {
        printf("Enter ID, Name, Marks for student %d: ", i+1);
        scanf("%d", &s[i].id);
        scanf(" %[^\n]", s[i].name); // read string with spaces
        scanf("%f", &s[i].marks);
    }

    // Display student information
    printf("\nStudent Information:\n");
    for(int i = 0; i < n; i++) {
        printf("ID: %d, Name: %s, Marks: %.2f\n", s[i].id, s[i].name, s[i].marks);
    }

    return 0;
}

