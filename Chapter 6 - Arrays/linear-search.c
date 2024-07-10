// Linear search of an array.
#include <stdio.h>
#define SIZE 100

int linearSearch(int arr[], int key, size_t size);

int main(void) {
  int arr[SIZE] = {0};

  for (size_t i = 0; i < SIZE; i++) {
    arr[i] = 2 * i;
  }

  int searchKey;
  printf("Enter integer search key: ");
  scanf("%d", &searchKey);

  int subscript = linearSearch(arr, searchKey, SIZE);

  if (subscript != -1) {
    printf("Found value at subscript %d\n", subscript);
  } else {
    puts("Value not found.");
  }
}

int linearSearch(int arr[], int key, size_t size) {
  for (size_t i = 0; i < size; i++) {
    if (arr[i] == key) {
      return i;
    }
  }
  
  return -1;
}