#include <stdio.h>
#include <stdlib.h>

struct Numbers {
    int n;
    int arr[];  // flexible array member
};

int main() {
    int size;
    printf("Enter number of elements: ");
    scanf("%d", &size);

    // Allocate memory for structure + array
    struct Numbers *num = malloc(sizeof(struct Numbers) + size * sizeof(int));
    num->n = size;

    // Input array elements
    for(int i = 0; i < size; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &num->arr[i]);
    }

    // Display elements
    printf("Array elements: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", num->arr[i]);
    }
    printf("\n");

    free(num);  // free allocated memory
    return 0;
}

