#include <stdio.h>

struct Student { 
  char name[20];
  int midterm;
  int final;
};

int main(void) { 
  struct Student student;

  printf("Enter student name: ");
  scanf("%s", student.name);

  printf("Enter midterm grade: ");
  scanf("%d", &student.midterm);

  printf("Enter final grade: ");
  scanf("%d", &student.final);

  float grade = (float) ( student.midterm * 0.4 + student.final * 0.6);

  if (grade >= 60.00) { 
    printf("%s passes and grades %.2f\n", student.name, grade);
  } else { 
    printf("%s fails and grades %.2f\n", student.name, grade);
  }
}