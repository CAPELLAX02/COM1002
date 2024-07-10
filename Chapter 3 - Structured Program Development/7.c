#include <stdio.h>

int main(void) {

  int x = 1;
  int total = 0;

  while (x <= 10) {
    int y = x * x;
    printf("%d\n", y);
    total += y;
    ++x;
  }

  printf("Total is %d\n", total);

}