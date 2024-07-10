// Two-dimensional array manipulations.
#include <stdio.h>
#define STUDENTS 3
#define EXAMS 4

int min(const int arr[][EXAMS], size_t pupils, size_t tests);
int max(const int arr[][EXAMS], size_t pupils, size_t tests);
double avg(const int arr[], size_t tests);
void printArray(const int arr[][EXAMS], size_t pupils, size_t tests);


int main(void) {
  int grades[STUDENTS][EXAMS] = {
    { 77, 68, 86, 73 },
    { 96, 87, 89, 78 },
    { 70, 90, 86, 81 }
  };
  puts("The array is:");
  printArray(grades, STUDENTS, EXAMS);

  printf("\n\nLowest Grade: %d\nHighest Grade: %d\n",
      min(grades, STUDENTS, EXAMS),
      max(grades, STUDENTS, EXAMS)
  );

  for (size_t i = 0; i < STUDENTS; i++) {
    printf("The average grade for student %zu is %.2f\n",
      i, avg(grades[i], EXAMS)  
    );
  }
}


int min(const int arr[][EXAMS], size_t pupils, size_t tests) {
  int lowGrade = 100;
  for (size_t i = 0; i < pupils; i++) {
    for (size_t j = 0; j < tests; j++) {
      if (arr[i][j] < lowGrade) {
        lowGrade = arr[i][j];
      }
    }
  }
  return lowGrade;
}


int max(const int arr[][EXAMS], size_t pupils, size_t tests) {
  int highGrade = 0;
  for (size_t i = 0; i < pupils; i++) {
    for (size_t j = 0; j < tests; j++) {
      if (arr[i][j] > highGrade) {
        highGrade = arr[i][j];
      }
    }
  }
  return highGrade;
}


double avg(const int arr[], size_t tests) {
  int total = 0;
  for (size_t i = 0; i < tests; i++) {
    total += arr[i];
  }
  double average = (double) total / tests;
  return average;
}


void printArray(const int arr[][EXAMS], size_t pupils, size_t tests) { 
  printf("%s", "           [0]  [1]  [2]  [3]");
  for (size_t i = 0; i < pupils; i++) {
    printf("\ngrades[%zu]  ", i);
    for (size_t j = 0; j < tests; j++) {
      printf("%-5d", arr[i][j]);
    }
  }
}