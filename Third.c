# include <stdio.h>
int main()
{
    int x,y,temp=0;
    printf("Enter two integers: ");
    scanf ("%d %d", &x, &y);
    temp = x;       
    x = y;          
    y = temp;       
    printf("\nAfter swapping: x = %d, y = %d", x, y);
    return 0;

}   