#include <stdio.h>

void getInput(int size, int numbers[]);
void printInput(int size, int numbers[]);
void printPrime(int size, int numbers[]);
void printOddNumbers(int size, int numbers[]);
void printEvenNumbers(int size, int numbers[]);

int main(void) {
  int size;
  printf("Enter the size of the array: ");
  scanf("%d", &size);
  int numbers[size];
  getInput(size, numbers);
  printInput(size, numbers);
  printPrime(size, numbers);
  printOddNumbers(size, numbers);
  printEvenNumbers(size, numbers);
}

void getInput(int size, int numbers[]) {
  puts("Enter the numbers below:");
  for (int i = 0; i < size; i++) {
    scanf("%d", &numbers[i]);
  }
  puts("");
}

void printInput(int size, int numbers[]) {
  printf("Array: ");
  for (int i = 0; i < size; i++) {
    printf("%d ", numbers[i]);
  }
  puts("");
}

void printPrime(int size, int numbers[]) {
  printf("Prime numbers: ");
  for (int i = 0; i < size; i++) {
    int flag = 1;
    for (int j = 2; j < numbers[i]; j++) {
      if (numbers[i] % j == 0) {
        flag = 0; 
        break;
      }
    }

    if (flag == 1) { 
      printf("%d ", numbers[i]);
    }
  }
  puts("");
}


void printOddNumbers(int size, int numbers[]) {
  printf("Odd numbers: ");
  for (int i = 0; i < size; i++) {
    if (numbers[i] % 2 != 0) {
      printf("%d ", numbers[i]);
    }
  }
  puts("");
}

void printEvenNumbers(int size, int numbers[]) {
  printf("Even numbers: ");
  for (int i = 0; i < size; i++) {
    if (numbers[i] % 2 == 0) {
      printf("%d ", numbers[i]);
    }
  }
  puts("");
}