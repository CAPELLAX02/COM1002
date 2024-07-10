// Using do...while iteration statement.

#include <stdio.h>

int main(void) {
  int counter1 = 1;
  int counter2 = 1;

  do {
    printf("%d ", counter1);
  } while (++counter1 <= 5);
  // OUTPUT: 1 2 3 4 5

  puts("");

  do {
    printf("%d ", counter2);
  } while (counter2++ <= 5);
  // OUTPUT: 1 2 3 4 5 6
}