// Putting values into an array, sorting the values into ascending order and printing the resulting array.

#include <stdio.h>
#define SIZE 10

void bubbleSort(int *const arr, size_t size);

int main(void) {
  int arr[SIZE] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };

  printf("Original Array: ");
  for (size_t i = 0; i < SIZE; i++) {
    printf("%d ", arr[i]);
  }
  puts("");

  bubbleSort(arr, SIZE);

  printf("Sorted Array: ");
  for (size_t i = 0; i < SIZE; i++) {
    printf("%d ", arr[i]);
  }
  puts("");
}

void bubbleSort(int *const arr, size_t size) {
  void swap(int *ptr1, int *ptr2);

  for (size_t i = 0; i < size - 1; i++) {
    for (size_t j = 0; j < size - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        swap(&arr[j], &arr[j + 1]);
      }
    }
  }
}

void swap(int *ptr1, int *ptr2) {
  int temp = *ptr1;
  *ptr1 = *ptr2;
  *ptr2 = temp;
}