#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
    int age;
    float marks;
};

// Function to sort by ID
void sortByID(struct Student s[], int n) {
    struct Student temp;
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(s[j].id > s[j+1].id) {
                temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
            }
        }
    }
}

// Function to sort by Age
void sortByAge(struct Student s[], int n) {
    struct Student temp;
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(s[j].age > s[j+1].age) {
                temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
            }
        }
    }
}

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    // Input student information
    for(int i = 0; i < n; i++) {
        printf("Enter ID, Name, Age, Marks for student %d: ", i+1);
        scanf("%d", &s[i].id);
        scanf(" %[^\n]", s[i].name);
        scanf("%d %f", &s[i].age, &s[i].marks);
    }

    int choice;
    printf("Sort by: 1. ID  2. Age : ");
    scanf("%d", &choice);

    if(choice == 1)
        sortByID(s, n);
    else
        sortByAge(s, n);

    // Display sorted student information
    printf("\nSorted Student Information:\n");
    for(int i = 0; i < n; i++) {
        printf("ID: %d, Name: %s, Age: %d, Marks: %.2f\n",
               s[i].id, s[i].name, s[i].age, s[i].marks);
    }

    return 0;
}

