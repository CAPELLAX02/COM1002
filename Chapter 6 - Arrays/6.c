// Static arrays are initialized to zero if not explicitly initialized.
#include <stdio.h>

void staticArrayInit(void);
void automaticArrayInit(void);

int main(void) {
  puts("First call to each function:");
  staticArrayInit();
  automaticArrayInit();

  puts("\n\nSecond call to each function:");
  staticArrayInit();
  automaticArrayInit();

  puts("");
}

// function to demonstrate a static local array
void staticArrayInit(void) {
  static int arr1[3];

  puts("\nValues on entering staticArrayInit:");

  for (int i = 0; i <= 2; i++) {
    printf("arr1[%d] = %d ", i, arr1[i]);
  }

  puts("\nValues on exiting staticArrayInit:");

  for (int i = 0; i <= 2; i++) {
    printf("arr1[%d] = %d ", i, arr1[i] += 5);
  }
}

 // function to demonstrate an automatic local array
 void automaticArrayInit(void) {
  int arr2[3] = { 1, 2, 3 };

  puts("\n\nValues on entering automaticArrayInit:");

  for (int i = 0; i <= 2; i++) {
    printf("arr2[%d] = %d ", i, arr2[i]);
  }

  puts("\nValues on exiting automaticArrayInit:");

  for (int i = 0; i <= 2; i++) {
    printf("arr2[%d] = %d ", i, arr2[i] += 5);
  }
 }