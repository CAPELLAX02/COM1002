#include <stdio.h>

void getInput(int size, int numbers[]);
void printInput(int size, int numbers[]);
float average(int size, int numbers[]);
void printDeviation(int size, int numbers[]);

int main(void) {
  int size;
  printf("Enter the size of the array: ");
  scanf("%d", &size);
  int numbers[size];
  getInput(size, numbers);
  printInput(size, numbers);
  printf("%.2f\n", average(size, numbers));
  printDeviation(size, numbers);
}

void getInput(int size, int numbers[]) {
  for (int i = 0; i < size; i++) {
    scanf("%d", &numbers[i]);
  }
}

void printInput(int size, int numbers[]) {
  for (int i = 0; i < size; i++) {
    printf("%d ", numbers[i]);
  }
  puts("");
}

float average(int size, int numbers[]) {
  int total = 0;
  for (int i = 0; i < size; i++) {
    total += numbers[i];
  }
  return (float) total / size;
}

void printDeviation(int size, int numbers[]) {
  for (int i = 0; i < size; i++) {
    printf("%.2f ", (numbers[i] - average(size, numbers)));
  }
}