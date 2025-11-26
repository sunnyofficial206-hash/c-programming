#include <stdio.h>

int main() {
    int hours;
    printf("Enter hours: ");
    scanf("%d", &hours);

    int minutes = hours * 60;
    int seconds = hours * 3600;

    printf("%d hour(s) = %d minute(s) = %d second(s)\n", hours, minutes, seconds);

    return 0;
}

