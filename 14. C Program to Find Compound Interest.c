#include <stdio.h>
#include <math.h>
int main() {
    //P = Principal amount,R = Rate of interest per period
    //T = Time (number of periods/years),A = Total amount after interest
    //CI = Compound Interest
    double P,R,T,A,CI;
    printf("Enter Principal amount: ");
    scanf("%lf", &P);
    printf("Enter Rate of interest: ");
    scanf("%lf", &R);
    printf("Enter Time (in years): ");
    scanf("%lf", &T);
    A = P* pow((1 + R/ 100),T);
    CI = A - P;
    printf("\nCompound Interest = %.2lf\n", CI);
    printf("Total Amount = %.2lf\n",A);
    return 0;
}

