#include <stdio.h>
int main() 
{
    int x=5, y=10;
    printf ("%d %d %d", y, y++, ++y);
    printf ("\n%d %d %d", x, x++, ++x);
    return 0;
}