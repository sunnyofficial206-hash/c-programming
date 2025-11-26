#include <stdio.h>
#include <stdlib.h>

int* createArray(int size) {
    int *arr = (int*)malloc(size * sizeof(int));  // allocate memory on heap
    for(int i = 0; i < size; i++) {
        arr[i] = i + 1;
    }
    return arr;  // safe to return pointer
}

int main() {
    int n = 5;
    int *array = createArray(n);

    for(int i = 0; i < n; i++)
        printf("%d ", array[i]);
    printf("\n");

    free(array);  // free allocated memory
    return 0;
}

