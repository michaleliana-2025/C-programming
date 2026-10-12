#include <stdio.h>
int main() {
    for(int i = 1; i <= 5; i++) {
        if(i == 3) break; // Stops the loop entirely at 3
        printf("%d ", i);
    }
    return 0;
}