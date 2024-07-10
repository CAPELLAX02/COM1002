// Sorting an array's values into ascending order.
#include <stdio.h>

int main(void) {
  int arr[10] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };

  printf("Original Array: ");
  for (int i = 0; i < 10; i++) {
    printf("%d ", arr[i]);
  }

  puts("");

  // Bubble Sort
  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < (9 - i); j++) {
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }

  printf("Sorted Array: ");
  for (int i = 0; i < 10; i++) {
    printf("%d ", arr[i]);
  }
}