#include <stdio.h>

void insertInOrder(int arr[], int size, int newElement);
void printArray(int arr[], int size);

int main(void) {
  int size;
  printf("Enter the size of the array: ");
  scanf("%d", &size);

  int arr[size + 1];

  puts("Enter the elements of the array (in ascending order):");
  for (int i = 0; i < size; i++) {
    scanf("%d", &arr[i]);
  }

  int newElement;
  printf("Enter the new element to be inserted: ");
  scanf("%d", &newElement);
  
  insertInOrder(arr, size, newElement);

  printArray(arr, size);
}

void insertInOrder(int arr[], int size, int newElement) {
  arr[size] = newElement;
  for (int i = 0; i <= size; i++) {
    for (int j = 0; j <= (size - 1 - i); j++) {
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

void printArray(int arr[], int size) {
  puts("Updated array:");
  for (int i = 0; i <= size; i++) {
    printf("%d ", arr[i]);
  }
}