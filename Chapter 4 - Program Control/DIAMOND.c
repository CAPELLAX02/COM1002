#include <stdio.h>

int main() {
    int i, j, space, rows = 5; // Elmasın yarısının yüksekliği için

    // Üst yarım elmas
    for(i = 1; i <= rows; i++) {
        // Boşluk basma
        for(space = 1; space <= (rows - i); space++) {
            printf(" ");
        }
        // Yıldız basma
        for(j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }
    
    // Alt yarım elmas
    for(i = rows - 1; i >= 1; i--) {
        // Boşluk basma
        for(space = 1; space <= (rows - i); space++) {
            printf(" ");
        }
        // Yıldız basma
        for(j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
