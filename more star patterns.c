#include <stdio.h>

int main() {
    int n = 3; // All star patterns consist of 3 rows

    // 1. Top Left: Left-aligned right-angled triangle
    printf("Pattern 1:\n");
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");

    // 2. Top Right: Right-aligned right-angled triangle
    printf("Pattern 2:\n");
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            printf("  "); 
        }
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");

    // 3. Middle Left: Inverted left-aligned right-angled triangle
    printf("Pattern 3:\n");
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");

    // 4. Middle Center: Inverted right-aligned right-angled triangle
    printf("Pattern 4:\n");
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            printf("  ");
        }
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");

    // 5. Middle Right: Hollow diamond shape
    printf("Pattern 5:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // Replaced abs() with simple grid index addition for a 3x3 grid
            if (i + j == 1 || i + j == 3) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("\n");

    // 6. Bottom Left: 'H' shape
    printf("Pattern 6:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j == 0 || j == n - 1 || i == n / 2) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}


#include <stdio.h>

int main() {
    int n = 3; // The patterns have 3 rows

    // 1. Alphabet Pattern (Continuous)
    // A 
    // B C 
    // D E F 
    printf("Alphabet Pattern:\n");
    char ch = 'A';
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%c ", ch);
            ch++; // Increment to the next letter
        }
        printf("\n");
    }
    printf("\n");

    // 2. Numerical Pattern (Continuous)
    // 1 
    // 2 3 
    // 4 5 6 
    printf("Numerical Pattern 1:\n");
    int count = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", count);
            count++; // Increment to the next number
        }
        printf("\n");
    }
    printf("\n");

    // 3. Numerical Pattern (Restarts every row)
    // 1 
    // 1 2 
    // 1 2 3 
    printf("Numerical Pattern 2:\n");
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j); // Print the column number
        }
        printf("\n");
    }

    return 0;
}