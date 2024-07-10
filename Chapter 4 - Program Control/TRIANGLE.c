#include <stdio.h>

int main(void) {
   int i, j, k;
    int rows = 7;

    puts("A Triangle:");
    for(i = 1; i <= rows; i++) {
        for(j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    puts("");

    puts("B Triangle:");
    for(i = rows; i >= 1; i--) {
        for(j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    puts("");

    puts("C Triangle:");
    for(i = 1; i <= rows; i++) {
        for(k = rows; k > i; k--) { // Boşluk basmak.
            printf(" ");
        }
        for(j = i; j >= 1; j--) { // Yıldız basmak.
            printf("*");
        }
        printf("\n");
    }
    puts("");

    puts("D Triangle:");
    for(i = rows; i >= 1; i--) {
        for(k = rows; k > i; k--) { // Boşluk basmak.
            printf(" ");
        }
        for(j = i; j >= 1; j--) { // Yıldız basmak.
            printf("*");
        }
        printf("\n");
    }
    puts("");
} 