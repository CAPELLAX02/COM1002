// string to double (strtod)

#include <stdio.h>
#include <stdlib.h>

int main(void) { 
  const char *string = "51.2% are admitted";
  char *stringPtr = NULL;

  double d = strtod(string, &stringPtr);

  printf("The string \"%s\" is converted to the \n", string);
  printf("double value %.2f and the string \"%s\"\n", d, string);
}