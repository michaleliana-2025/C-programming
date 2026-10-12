#include <stdio.h>

int main() 
{
    int n = 3;
    int i, j;
    
    // Pattern I
    printf("Pattern I:\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");

    // Pattern II
    printf("Pattern II:\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    printf("\n");

    // Pattern III
    printf("Pattern III:\n");
    int num = 1;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }
    printf("\n");

    // Pattern IV
    printf("Pattern IV:\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }
    printf("\n");

    // Pattern V
    printf("Pattern V:\n");
    for (i = 1; i <= n; i++) {
        for (j = 0; j < i; j++) {
            printf("%c ", 'A' + j);
        }
        printf("\n");
    }
    printf("\n");

    // Pattern VI
    printf("Pattern VI:\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("%c ", 'A' + i - 1);
        }
        printf("\n");
    }
    printf("\n");

    // Pattern VII
    printf("Pattern VII:\n");
    char ch = 'A';
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("%c ", ch);
            ch++;
        }
        printf("\n");
    }
    printf("\n");

    // Pattern VIII
    printf("Pattern VIII:\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n - i; j++) {
            printf("  "); 
        }
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}