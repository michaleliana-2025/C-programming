#include <stdio.h>
int main()
{
    int n, i, even=0, odd=0;
    printf("Enter the value of n:")
    scanf ("%d", &n);
    for (i=1, i<=n;i++)
    {
        if (i%2==0)
        {
            printf ("%d is even Number",i)
            even++;
        }
        else 
        {
            printf("%d id odd Number", i);
        }
    printf (" Total even numbers are: %d and Toral Odd Number are %d, even, odd");
    return 0;
}
  