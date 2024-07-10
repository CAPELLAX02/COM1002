// Preincrementing and postincrementing

#include <stdio.h>
#include <limits.h>

int main(void) {

  int x = INT_MAX;
  printf("%d", x); // 21474836475

  int a = 5;
  printf("%d\n", a);    // 5
  printf("%d\n", a++);  // 5
  printf("%d\n\n", a);  // 6

  int b = 5;
  printf("%d\n", b);    // 5
  printf("%d\n", ++b);  // 6
  printf("%d\n", b);    // 6

}