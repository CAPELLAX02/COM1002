// Summation with "for" loop

#include <stdio.h>

int main(void) {

  int sum = 0;

  for (int number = 1; number <= 100; number++) {
    sum += number;
  }

  printf("1 + 2 + 3 + ... + 100 = %d", sum); 
  // 1 + 2 + 3 + ... + 100 = 5050

}