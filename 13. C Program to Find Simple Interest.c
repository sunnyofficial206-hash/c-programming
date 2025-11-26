#include <stdio.h>
int main() {
    //p=principal amount,r=rate of interest,t=time,si=simpleInteres
    float p, r, t, si;
    printf("Enter Principal amount: ");
    scanf("%f", &p);
    printf("Enter Rate of interest: ");
    scanf("%f", &r);
    printf("Enter Time (in years): ");
    scanf("%f", &t);
    si = (p * r * t) / 100;
    printf("\nSimple Interest = %.2f\n", si);
    return 0;
}
