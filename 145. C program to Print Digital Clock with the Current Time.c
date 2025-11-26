#include <stdio.h>
#include <time.h>
#include <unistd.h>  // for sleep()
#include <stdlib.h>  // for system("clear")

int main() {
    while(1) {
        time_t now = time(NULL);
        struct tm *t = localtime(&now);

        system("clear");  // use "cls" on Windows

        printf("Digital Clock:\n");
        printf("%02d:%02d:%02d\n", t->tm_hour, t->tm_min, t->tm_sec);

        sleep(1);  // wait for 1 second
    }
    return 0;
}

