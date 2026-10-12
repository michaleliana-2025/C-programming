#include <stdio.h>
int main()
{
    int n = 7, chnum=1; 
    char ch= 'A';
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("%c ", ch);            
            if (ch>= 'G') {
                ch= 'A';
            } 
            else {
                ch++;
            }           
        }
        printf("\n");
    }
    printf("\n");
}