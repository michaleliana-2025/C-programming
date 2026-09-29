#include<stdio.h>
int main()
{ 
    int x,y,sum, sub, mul, div, mod;
    printf("Enter two integers: ");
    scanf ("%d %d", &x, &y);
    sum = x + y;
    printf("The sum %d", sum);
    printf("\nThe sub %d", x-y);
    printf("\nThe mul %d", x*y);    
    printf("\nThe div %d", x/y);
    return 0;

}