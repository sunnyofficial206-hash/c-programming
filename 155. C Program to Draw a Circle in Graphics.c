#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");  // initialize graphics mode

    int x = 250, y = 250;  // center of circle
    int radius = 100;

    circle(x, y, radius);  // draw circle

    getch();     // wait for key press
    closegraph(); // close graphics mode
    return 0;
}

