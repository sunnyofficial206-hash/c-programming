#include <stdio.h>

int main() {
    int arr[] = {10, 25, 7, 42, 18};
    int *ptr = arr; // pointer to first element
    int n = sizeof(arr)/sizeof(arr[0]);
    int max = *ptr;

    for(int i = 1; i < n; i++) {
        if(*(ptr + i) > max)
            max = *(ptr + i);
    }

    printf("Largest element: %d\n", max);
    return 0;
}

