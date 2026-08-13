//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.
#include <stdio.h>
#include <math.h>

int main() {
    float P, R, T;
    float SI, CI, amount;

    printf("Enter Principal: ");
    scanf("%f", &P);
printf("Enter Rate of Interest: ");
scanf("%f", &R);

printf("Enter Time (in years): ");
 scanf("%f", &T);
    SI = (P * R * T) / 100;
    amount = P * pow((1 + R / 100), T);
    CI = amount - P;
printf("\nSimple Interest = %.2f", SI);
    printf("\nCompound Interest = %.2f", CI);
return 0;
}