#include <stdio.h>

int main() {
    int val = 50;
    int *ptr = &val;
    
    printf("Value accessed via pointer: %d\n", *ptr);
    return 0;
}
