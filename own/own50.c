#include <stdio.h>

int main() {
    char str[100];
    int length = 0;
    
    printf("Enter a word: ");
    scanf("%s", str);
    
    // The loop runs until it hits the hidden null character
    while (str[length] != '\0') {
        length++;
    }
    
    printf("The length of the string is %d\n", length);
    
    return 0;
}