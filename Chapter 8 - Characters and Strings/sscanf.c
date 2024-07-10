// Using function sscanf()

#include <stdio.h>

int main(void) { 
  char s[] = "31298 87.375";
  int x = 0;
  double y = 0;

  sscanf(s, "%d%lf", &x, &y);

  puts("The values stored in character array s are: ");
  printf("integer: %6d\ndouble: %8.3f\n", x, y);
}