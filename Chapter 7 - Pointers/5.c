// Attempting to modify data through a non-constant pointer to constant data.
#include <stdio.h>

// p cannot be used to modify the value of the variable to which it points
void f(const int *p) {
  *p = 100; // error: cannot modify a const object
}

int main(void) {
  int x = 7;

  f(&x); // f attempts illegal modification
}