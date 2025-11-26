#include <stdio.h>

int main() {
    int hour, min, sec;
    char ampm[3];

    printf("Enter time in 24-hour format (HH MM SS): ");
    scanf("%d %d %d", &hour, &min, &sec);

    if(hour >= 12) {
        strcpy(ampm, "PM");
        if(hour > 12) hour -= 12;
    } else {
        strcpy(ampm, "AM");
        if(hour == 0) hour = 12;
    }

    printf("Time in 12-hour format: %02d:%02d:%02d %s\n", hour, min, sec, ampm);
    return 0;
}

