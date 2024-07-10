 // Printing a string one character at a time using a non-constant pointer to constant data.
 #include <stdio.h>

 void printCharacters(const char *p) {
  for (; *p != '\0'; p++) {
    printf("%c", *p);
  }
 }

 int main(void) {
  char string[] = "print characters of a string";
  printCharacters(string);
 }