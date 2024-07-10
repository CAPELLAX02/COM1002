// Class average program with counter-controlled iteration.

#include <stdio.h>

int main(void) {
  int total = 0;
  int counter = 1;

  while (counter <= 10) {
    printf("%s", "Enter grade: ");
    int grade = 0;
    scanf("%d", &grade);
    total = total + grade;
    counter++;
  }

  int average = total / 10;

  printf("Class average is %d\n", average);
}