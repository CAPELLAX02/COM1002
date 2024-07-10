#include <stdio.h>

int main(void) {

  int count = 1;

  while (count <= 10) {
    puts((count % 2) ? "****" : "++++++++");
    count ++;
  }

}