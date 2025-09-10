//Write a program to calculate simple and compound interest for given principal, rate, and time.

#include <stdio.h>
#include <math.h>   // For pow() function in compound interest calculation

int main() {
    float principal, rate, time;
    float simpleInterest, compoundInterest;
    printf("Enter Principal amount: ");
    scanf("%f", &principal);
    printf("Enter Rate of interest (in %%): ");
    scanf("%f", &rate);
    printf("Enter Time (in years): ");
    scanf("%f", &time);
    simpleInterest = (principal * rate * time) / 100;
    compoundInterest = principal * (pow((1 + rate / 100), time) - 1);
    printf("\nSimple Interest = %.2f", simpleInterest);
    printf("\nCompound Interest = %.2f\n", compoundInterest);

    return 0;
}
