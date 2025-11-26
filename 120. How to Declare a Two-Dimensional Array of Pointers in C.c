
//Pointers to integers
#include <stdio.h>

int main() {
    int a = 1, b = 2, c = 3, d = 4;
    int *ptr[2][2];  // 2x2 array of int pointers

    ptr[0][0] = &a;
    ptr[0][1] = &b;
    ptr[1][0] = &c;
    ptr[1][1] = &d;

    printf("%d %d %d %d\n", *ptr[0][0], *ptr[0][1], *ptr[1][0], *ptr[1][1]);
    return 0;
}

//Pointers to strings
#include <stdio.h>

int main() {
    char *names[2][2] = { {"Alice", "Bob"}, {"Charlie", "David"} };

    printf("%s %s %s %s\n", names[0][0], names[0][1], names[1][0], names[1][1]);
    return 0;
}
