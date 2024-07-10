// Computing the sum of the elements of an array.

#include <stdio.h>

int main(void) {

  int myArray[5] = { 1, 2, 3, 4, 5 };
  int total = 0;

  for (int i = 0; i < 5; i++) {
    total += myArray[i];
  }

  printf("The total of myArray's values is %d\n", total);

}