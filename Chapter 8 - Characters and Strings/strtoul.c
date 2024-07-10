// string to unsigned long (strtoul)

#include <stdio.h>
#include <stdlib.h>

int main(void) { 
  const char *string = "1234567abc";
  char *remainderPtr = NULL;

  unsigned long int x = strtoul(string, &remainderPtr, 0);

    printf("The original string: %s\n", string);
  printf("The converted value: %ld\n", x);
  printf("The remainder of the original string: %s\n", remainderPtr);
  printf("The converted value - 567 = %ld\n", x - 567);
}