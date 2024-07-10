// Counter-controlled iteration with the "for" statement

#include <stdio.h>

int main(void) {

  for (int i = 0; i <= 5; ++i) {
    printf("%d", i);
  } // 012345

  puts("");

  for (int i = 0; i <= 5; i++) {
    printf("%d", i);
  } // 012345

}