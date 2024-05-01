#include <stdio.h> 
 
int main() { 
    int i, j, n = 10; // Adjust n to change the size of the heart 
 
    for (i = n / 2; i <= n; i += 2) { 
        for (j = 1; j < n - i; j += 2) { 
            printf("  "); 
        } 
 
        for (j = 1; j <= i; j++) { 
            printf("👽"); //
        } 
 
        for (j = 1; j <= n - i; j++) { 
            printf("  "); 
        } 
 
        for (j = 1; j <= i; j++) { 
            printf("👽"); //
        } 
 
        printf("\n"); 
    } 
 
    for (i = n; i >= 1; i--) { 
        for (j = i; j < n; j++) { 
            printf("  "); 
        } 
 
        for (j = 1; j <= (i * 2) - 1; j++) { 
            printf("👽"); //
        } 
 
        printf("\n"); 
    } 
 
    return 0; 
} 