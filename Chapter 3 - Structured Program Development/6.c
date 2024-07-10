// raise x to the y power

#include <stdio.h>

int main(void) {

  int x, y;
  int result = 1;

  printf("%s", "x: ");
  scanf("%d", &x);

  printf("%s", "y: ");
  scanf("%d", &y);

  for (int i = 0; i < y; i++ ) {
    result *= x;
  }

  printf("x^y: %d", result);

  // int i = 1;
  // int power = 1;

  // while (i <= y) {
  //   power *= x;
  //   i++;
  // }

  // printf("x^y: %d", power);
}