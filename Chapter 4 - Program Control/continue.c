// Using the continue statmenet in a for statement.

#include <stdio.h>

int main(void) {
  for (int x = 1; x <= 10; x++) {
    if (x == 5) {
      continue;
    }

    printf("%d ", x);
  }

  puts("Used continue to skip printing the value 5.");
}