 // Cube a variable using pass-by-reference with a pointer argument.
 #include <stdio.h>

 void cubeByReference(int *p) {
  *p = *p * *p * *p;
 }

int main(void) {
  int number = 5;
  
  cubeByReference(&number); // pass address of 'number' to function

  printf("%d", number);
}