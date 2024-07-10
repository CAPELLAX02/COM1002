// Calculate the sum of the integers from 1 to 10

#include <stdio.h>

int main(void) {

  int x = 1;
  int sum = 0;

  while (x <= 10) {
    sum += x;
    x++;
  }

  printf("The sum is: %d", sum);

}