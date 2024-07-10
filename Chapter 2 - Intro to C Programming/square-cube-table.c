/*
    following program that calculates the squares and cubes of the numbers from 0 to 10 and uses tabs to display values.
*/

#include <stdio.h>

int main(void) {

  printf("number\tsquare\tcube\n");

  for (int i = 0; i <= 10; i++) {
    printf("%d\t%d\t%d\n", i, i * i, i * i * i);
  }

}