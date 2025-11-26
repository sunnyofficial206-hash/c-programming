#include <stdio.h>
#include <time.h>

int main() {
    time_t now;
    time(&now);  // get current time

    struct tm *t = localtime(&now);  // convert to local time

    printf("Current Date and Time: %02d-%02d-%04d %02d:%02d:%02d\n",
           t->tm_mday, t->tm_mon + 1, t->tm_year + 1900,
           t->tm_hour, t->tm_min, t->tm_sec);

    return 0;
}

