// Using function sprintf()

#include <stdio.h>
#define SIZE 80

int main(void) { 
  int x = 0;
  double y = 0.0;

  puts("Enter an integer and a double:");
  scanf("%d%lf", &x, &y);

  char s[SIZE] = { '\0' };
  sprintf(s, "integer: %6d\ndouble:%7.2f", x, y);

  printf("The formatted output stored in array s is: \n%s\n", s);
}