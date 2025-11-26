#include <stdio.h>
#include <time.h>

int main() {
    int year;
    printf("Enter year: ");
    scanf("%d", &year);

    struct tm date = {0};
    date.tm_year = year - 1900;  // tm_year is years since 1900

    printf("Dates in different formats:\n");
    printf("YYYY-MM-DD | DD-MM-YYYY | MM/DD/YYYY\n");

    for(int month = 0; month < 12; month++) {
        date.tm_mon = month;

        // Find number of days in the month
        int days;
        switch(month) {
            case 1: // February
                days = (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) ? 29 : 28;
                break;
            case 3: case 5: case 8: case 10:
                days = 30;
                break;
            default:
                days = 31;
        }

        for(int day = 1; day <= days; day++) {
            date.tm_mday = day;
            printf("%04d-%02d-%02d | %02d-%02d-%04d | %02d/%02d/%04d\n",
                   year, month+1, day,
                   day, month+1, year,
                   month+1, day, year);
        }
    }

    return 0;
}

