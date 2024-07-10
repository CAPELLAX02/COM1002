// Demonstrating an array of pointers to functions.
#include <stdio.h>

void f1(int a);
void f2(int b);
void f3(int c);

int main(void) {
  void (*f[3])(int) = { f1, f2, f3 };

  printf("%s", "Enter a number between 0 and 2, 3 to end: ");

  int choice;
  scanf("%d", &choice);

  while (choice >= 0 && choice < 3) {
    (*f[choice])(choice);

    printf("s", "Enter a number between 0 and 2, 3 to end: ");
    scanf("%d", &choice);
  }
  puts("Program execution completed.");
}

void f1(int a) {
  printf("You entered %d so f1 was called\n\n", a);
}

void f2(int b) {
  printf("You entered %d so f2 was called\n\n", b);
}

void f3(int c) {
  printf("You entered %d so f3 was called\n\n", c);
}