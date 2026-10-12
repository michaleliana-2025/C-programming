#include <stdio.h>
int main() {
    for(int i = 1; i <= 3; i++) {
        if(i == 2) continue; // Skips 2, but keeps going
        printf("%d ", i);
    }
    return 0;
}
