#include <stdio.h>
int main()
{
    float PMO, MMO,Total;
    printf("Enter the obtained marks in physics: ");
    scanf("%f", &PMO);
    printf("Enter the obtained marks in maths: ");
    scanf("%f",&MMO);
    Total= (((30.0/100.0)*PMO) + ((70.0/100.0)*MMO));
    printf ("Total marks obtained is %f1", Total);
}