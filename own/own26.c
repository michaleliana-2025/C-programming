#include <stdio.h>
#include <string.h>

int main() {
    char source[] = "CopyThis";
    char destination[20];
    
    strcpy(destination, source);
    printf("Copied text: %s\n", destination);
    
    return 0;
}