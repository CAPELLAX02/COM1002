// Multipurpose sorting program using function pointers.
#include <stdio.h>

void bubbleSort(int arr[], int size, int (*compare)(int a, int b));
int ascending(int a, int b);
int descending(int a, int b);

int main(void) {
  int arr[10] = { 2,6,4,8,10,12,89,68,45,37 };
  
  printf("%s", "Enter 1 to sort in ascending order,\nEnter 2 to sort in descending order: ");

  int order;
  scanf("%d", &order);
  puts("\nData item in original order");

  for (int i = 0; i < 10; i++) {
    printf("%5d", arr[i]);
  }

  if (order == 1) {
    bubbleSort(arr, 10, ascending);
    puts("\nData items in ascending order");
  } else {
    bubbleSort(arr, 10, descending);
    puts("\nData items in descending order");
  }

  for (int i = 0; i < 10; i++) {
    printf("%5d", arr[i]);
  }
  puts("");
}


void bubbleSort(int arr[], int size, int (*compare)(int a, int b)) {
  void swap(int *ptr1, int *ptr2);

  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size - i - 1; j++) {
      if ((*compare)(arr[j], arr[j + 1])) {
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

int ascending(int a, int b) {
  return b < a;
}

int descending(int a, int b) {
  return a < b;
}