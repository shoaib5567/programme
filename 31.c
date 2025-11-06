#include <stdio.h>

int main() {
    int i, j;
    
    // Loop through rows
    for(i = 1; i <= 4; i++) {
        // Loop to print stars in each row
        for(j = 1; j <= i; j++) {
            printf("*");
        }
        // Move to next line after each row
        printf("\n");
    }
    
    return 0;
}

