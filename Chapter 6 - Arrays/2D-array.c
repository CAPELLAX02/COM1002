#include <stdio.h>

void printArray(int arr[][3]);

int main(void) {
  int arr1[2][3] = {{1,2,3},{4,5,6}};
  printArray(arr1);

  int arr2[2][3] = {{1,2,3},{4,5}};
  printArray(arr2);

  int arr3[2][3] = {{1,2},{4}};
  printArray(arr3);
}

void printArray(int arr[][3]) {
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }
  printf("\n");
}