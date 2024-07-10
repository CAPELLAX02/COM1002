#include <stdio.h>

int maximum(int x, int y, int z) {
  int max = x;
  if (y > max) { max = y; }
  if (z > max) { max = z; }
  return max;
}

int main(void) {
  int number1 = 0;
  int number2 = 0;
  int number3 = 0;

  printf("%s", "Enter three integers: ");
  scanf("%d%d%d", &number1, &number2, &number3);

  printf("Maximum is: %d\n", maximum(number1, number2, number3));
}