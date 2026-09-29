#include <stdio.h>

int main() {
    int arr[10], search, i, found = 0;
    
    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter number to search: ");
    scanf("%d", &search);
    
    for (i = 0; i < 5; i++) {
        if (arr[i] == search) {
            printf("Found %d at position %d.\n", search, i + 1);
            found = 1;
            break;
        }
    }
    
    if (found == 0) {
        printf("%d is not present in the array.\n", search);
    }
    
    return 0;
}