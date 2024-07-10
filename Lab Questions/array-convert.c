#include <stdio.h>

void convert(int numbers[], int row, int col);

int main(void) {
  int row, col;
  printf("Enter the number of rows: ");
  scanf("%d", &row);
  printf("Enter the number of columns: ");
  scanf("%d", &col);

  int size = row * col;
  int numbers[size];

  printf("Enter the elements of the 1D array below.\n");
  for (int i = 0; i < size; i++) {
    scanf("%d", &numbers[i]);
  }

  convert(numbers, row, col);
}

void convert(int numbers[], int row, int col) {
  int newArr[row][col];
  int counter = 0;

  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      newArr[i][j] = numbers[counter];
      counter++;
    }
  }

  puts("The converted 2D array is:");
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      printf("%5d", newArr[i][j]);
    }
    puts("");
  }
}