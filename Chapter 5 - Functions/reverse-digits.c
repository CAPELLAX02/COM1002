#include <stdio.h>

int reverseNumber(int x) {
  int reversed = 0;

  while (x > 0) {
    reversed = reversed * 10 + x % 10;
    x /= 10;
  }

  return reversed;
}

int main(void) {
  int number;

  printf("pick a number: ");
  scanf("%d", &number);

  printf("reversed: %d", reverseNumber(number));
}