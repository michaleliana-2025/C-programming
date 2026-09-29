#include <stdio.h>

int main() {
    char name[50];
    
    printf("Enter your first name: ");
    // Note: %s doesn't need an & before the variable name
    scanf("%s", name);
    
    printf("Hello, %s! Welcome to Strings.\n", name);
    
    return 0;
}
