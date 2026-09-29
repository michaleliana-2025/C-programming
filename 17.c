// WAP to calculate simple interest and compound interest
#include <stdio.h>
#include <math.h>

int main()
{
    float principal, rate, time, simple_interest, compound_interest;

    printf("Enter principal amount: ");
    scanf("%f", &principal);
    
    printf ("\nEnter rate: ");
    scanf("%f", &rate);

    printf ("\nEnter number of years: ");
    scanf("%f", &time);

    simple_interest = principal * rate * time / 100;
    compound_interest = (principal * pow(1 + rate / 100, time) - 1);

    printf("\nSimple Interest is %.2f", simple_interest);
    printf("\nCompound Interest is %.2f\n", compound_interest);
    return 0;
}