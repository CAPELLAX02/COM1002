#include <stdio.h>

int main(void) {
  int a = 7;
  int *aPtr = &a; // set aPtr to the address of 'a'.

  printf("\nAddress of 'a' is %p\n", &a);
  printf("Value of 'aPtr' is %p\n\n", aPtr);

  printf("Showing that * and & are complements of each other:\n");
  printf("&*aPtr = %p\n", &*aPtr);
  printf("*&aPtr = %p\n\n", *&aPtr);
}