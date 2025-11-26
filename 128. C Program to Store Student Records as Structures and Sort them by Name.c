#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
    float marks;
};

int main() {
    struct Student s[3], temp;
    int n = 3;

    // Input student information
    for(int i = 0; i < n; i++) {
        printf("Enter ID, Name, Marks for student %d: ", i+1);
        scanf("%d", &s[i].id);
        scanf(" %[^\n]", s[i].name);
        scanf("%f", &s[i].marks);
    }

    // Sort students by name (lexicographically) using bubble sort
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(strcmp(s[j].name, s[j+1].name) > 0) {
                temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
            }
        }
    }

    // Display sorted student information
    printf("\nSorted Student Information by Name:\n");
    for(int i = 0; i < n; i++) {
        printf("ID: %d, Name: %s, Marks: %.2f\n", s[i].id, s[i].name, s[i].marks);
    }

    return 0;
}

