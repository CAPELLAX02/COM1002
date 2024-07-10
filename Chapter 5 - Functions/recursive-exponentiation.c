// Write a recursive function power(base, exponent) that when invoked returns base^exponent.
// Hint: base^exponent = base * base^(exponent-1), and terminating condition occurs when 'exponent'=1 because base^1 = base.

#include <stdio.h>

int power(int base, int expo);

int main(void) {
  int x, y;
  printf("x: ");
  scanf("%d", &x);
  printf("y: ");
  scanf("%d", &y);
  printf("x^y = %d", power(x, y));
}

int power(int base, int expo) {
  if (expo == 1) {
    return base;
  } else {
    return base * power(base, expo - 1);
  }
}