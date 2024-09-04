#include <stdio.h>

int print_10_stars() {

    for (int i = 0; i < 10; i++) {
        printf("*");
    }
    printf("\n");
    return 0;
}

// *
// **
// ***
// ****
// *****

int print_5_stars_in_pattern() {
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}




int main() {

    print_5_stars_in_pattern();
    return 0;
}