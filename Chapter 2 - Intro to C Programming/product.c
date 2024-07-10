#include <stdio.h>

int main(void) {
  int x, y, z;

  printf("First number: ");
  scanf("%d", &x);

  printf("Second number: ");
  scanf("%d", &y);

  printf("Third number: ");
  scanf("%d", &z);

  int product = x * y * z;

  printf("%d x %d x %d = %d", x, y, z, product);

}