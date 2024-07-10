// Passing arrays and individual array elements to functions.
#include <stdio.h>

void modifyArray(int arr[], int size);
void modifyElement(int element);

int main(void) {
  int a[5] = { 0, 1, 2, 3, 4 };

  puts("Effects of passing entire array by reference:\n\nThe values of the original array are:");

  // output original array
  for (int i = 0; i < 5; i++) {
    printf("%d", a[i]);
  }

  puts("");

  modifyArray(a, 5);

  puts("The values of the modified array are:");

  // output modified array
  for (int i = 0; i < 5; i++) { 
    printf("%d", a[i]);
  }

  printf("\n\nEffects of passing array element by value:\nThe value of a[3] is %d\n", a[3]);

  modifyElement(a[3]);

  printf("The value of a[3] is %d\n", a[3]);
}

 // in function modifyArray, "b" points to the original array "a" in memory
void modifyArray(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    arr[i] *= 2;
  }
}

 // in function modifyElement, "e" is a local copy of array element
 void modifyElement(int element) {
  element *= 2;
  printf("Value in modifyElement is %d\n", element);
 }