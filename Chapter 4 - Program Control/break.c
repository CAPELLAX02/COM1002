// Using break statement in a for statment.

#include <stdio.h>

int main(void) {
  int x = 1;

  for (int _; x <= 10; x++) {
    if (x == 8) {
      break;
    }

    printf("%d ", x);
  }

  printf("\nBroke out of loop at x == %d\n", x);
}