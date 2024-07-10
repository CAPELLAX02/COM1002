#include <stdio.h>

int main(void) {
  int s[5] = {0};

  for (int i = 0; i < 5; i++) {
    s[i] = 2 + (2 * i);
  }

  printf("%s%8s\n", "Element", "Value");

  for (int i = 0; i < 5; i++) {
    printf("%7zu%8d\n", i, s[i]);
  }

}