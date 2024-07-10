// WHAT DOES THIS PROGRAM DO?
#include <stdio.h>
#define SIZE 10

void someFunction(const int arr[], size_t start, size_t size);

int main(void) {
  int arr[SIZE] = { 8, 3, 1, 2, 6, 0, 9, 7, 4, 5 };
  puts("Answer is:");
  someFunction(arr, 0, SIZE);
  puts("");
}

// Reverse the array
void someFunction(const int arr[], size_t start, size_t size) {
  if (start < size) {
    someFunction(arr, start + 1, size);
    printf("%d  ", arr[start]);
  }
}