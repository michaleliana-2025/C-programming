#include <stdio.h>
int main() {
    int x = 1, y = 2, temp;
    temp = x; x = y; y = temp; 
    printf("x=%d, y=%d", x, y);
    return 0;
}
