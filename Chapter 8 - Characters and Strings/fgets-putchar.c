// Using functions fgets() and putchar()

#include <stdio.h>
#define SIZE 80

void reverse(const char * const sPtr);

int main(void) { 
  char sentence[SIZE] = "";

  puts("Enter a line of text:");
  fgets(sentence, SIZE, stdin);

  printf("\n%s", "The line printed backwards is: ");
  reverse(sentence);
  puts("");
}

void reverse(const char * const sPtr) { 
  if ('\0' == sPtr[0]) { 
    return;
  } else {
    reverse(&sPtr[1]);
    putchar(sPtr[0]);
  }
}