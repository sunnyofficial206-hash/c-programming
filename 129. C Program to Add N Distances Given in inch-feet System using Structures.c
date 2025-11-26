#include <stdio.h>

struct Distance {
    int feet;
    float inch;
};

int main() {
    int n;
    printf("Enter number of distances: ");
    scanf("%d", &n);

    struct Distance d[n], sum = {0, 0.0};

    // Input distances
    for(int i = 0; i < n; i++) {
        printf("Enter feet and inch for distance %d: ", i+1);
        scanf("%d %f", &d[i].feet, &d[i].inch);

        sum.feet += d[i].feet;
        sum.inch += d[i].inch;
    }

    // Convert inches to feet if more than 12
    sum.feet += (int)(sum.inch / 12);
    sum.inch = (float)fmod(sum.inch, 12);

    printf("Total Distance = %d feet %.2f inches\n", sum.feet, sum.inch);
    return 0;
}

