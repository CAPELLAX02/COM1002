// Class-average program with sentinel-control iteration.

#include <stdio.h>

int main(void) {

  int total = 0;
  int counter = 0;

  printf("%s", "Enter grade, -1 to end: ");
  int grade = 0;
  scanf("%d", &grade);

  while (grade != -1) {
    total += grade;
    counter ++;

    printf("%s", "Enter grade, -1 to end: ");
    scanf("%d", &grade);
  }

  if (counter != 0) {
    int average = total / counter;
    printf("Class average is %.2f\n", average);
  } else {
    puts("No grades were entered.");
  }

}