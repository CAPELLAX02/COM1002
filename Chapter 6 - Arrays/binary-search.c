// Binary search of a sorted array.
#include <stdio.h>
#define SIZE 15

int binarySearch(const int arr[], int key, size_t low, size_t high);
void printHeader(void);
void printRow(const int arr[], size_t low, size_t mid, size_t high);

int main(void) {
  int arr[SIZE] = { 0 };

  for (size_t i = 0; i < SIZE; i++) {
    arr[i] = 2 * i;
  }

  int key = 0;
  printf("%s", "Enter a number between 0 and 28: ");
  scanf("%d", &key);

  printHeader();

  int result = binarySearch(arr, key, 0, SIZE - 1);

  if (result != -1) {
    printf("\n%d found at subscript %d\n", key, result);
  } else {
    printf("\n%d not found\n", key);
  }
}


int binarySearch(const int arr[], int key, size_t low, size_t high) {
  while (low <= high) {
    size_t middle = (low + high) / 2;

    printRow(arr, low, middle, high);

    if (key == arr[middle]) {
      return middle;
    } else if (key < arr[middle]) {
      high = middle -1;
    } else // key > arr[middle] {
      low = middle + 1;
    }

  return -1;
}


void printHeader(void) {
  puts("\nSubscripts:");

  for (int i = 0; i < SIZE; i++) {
    printf("%3d ", i);
  }

  puts("");

  for (int i = 1; i <= 4 * SIZE; i++) {
    printf("%s", "-");
  }

  puts("");
}


void printRow(const int arr[], size_t low, size_t mid, size_t high) {
  for (size_t i = 0; i < SIZE; i++) {
    if (i < low || i > high) {
      printf("%s", "   ");
    } else if (i == mid) {
      printf("%3d*", arr[i]);
    } else {
      printf("%3d ", arr[i]);
    }
  }

  puts("");
}