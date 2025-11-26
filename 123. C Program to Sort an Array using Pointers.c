#include <stdio.h>

int main() {
    int arr[] = {5, 2, 9, 1, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int *ptr = arr;

    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(*(ptr + j) > *(ptr + j + 1)) {
                int temp = *(ptr + j);
                *(ptr + j) = *(ptr + j + 1);
                *(ptr + j + 1) = temp;
            }
        }
    }

    printf("Sorted array: ");
    for(int i = 0; i < n; i++)
        printf("%d ", *(ptr + i));
    printf("\n");

    return 0;
}

