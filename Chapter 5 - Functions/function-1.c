#include <stdio.h>

int square(int number) {
  return number * number;
}

int main(void) {
  for (int i = 1; i <= 10; i++) {
    printf("%d ", square(i));
  }
}