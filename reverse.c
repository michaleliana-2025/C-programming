#include <stdio.h>
int main()
{
    int n, rem, rev=0, count=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    rem= n%10;
    while(n!=0)
    {
        rev= rev*10 + rem;
        n= n/10;
        rem= n%10;
        count++;
    }
    printf("The number of digits in the number is: %d\n", count);
    return 0;
}