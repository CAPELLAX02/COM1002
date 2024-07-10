#include <stdio.h>

int findMax(int arr[], int size);
int calculateSum(int arr[], int size);

int main(void) {
  int size;
  printf("Enter the size of the array: ");
  scanf("%d", &size);

  int arr[size];
  printf("Enter %d integers:\n", size);
  for (int i = 0; i < size; i++) {
    scanf("%d", &arr[i]);
  }

  printf("Maximum element: %d\n", findMax(arr, size));
  printf("Sum of all elements: %d\n", calculateSum(arr, size));
}

int findMax(int arr[], int size) {
  int max = arr[0];
  for (int i = 0; i < size; i++) {
    if (arr[i] > max) {
      max = arr[i];
    }
  }
  return max;
}

int calculateSum(int arr[], int size) {
  int total = 0;
  for (int i = 0; i < size; i++) {
    total += arr[i];
  }
  return total;
}