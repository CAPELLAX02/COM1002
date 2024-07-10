// WHAT DOES THE FOLLOWING PROGRAM DO?
#include <stdio.h>
#define SIZE 10

int whatIsThis(const int arr[], size_t p);

int main(void) {
  int arr[SIZE] = {1,2,3,4,5,6,7,8,9,10};
  int x = whatIsThis(arr, SIZE);
  printf("Result is %d\n", x);
}

int whatIsThis(const int arr[], size_t p) { 
  if (1 == p) {
    return arr[0];
  } else {
    // recursion step
    return arr[p - 1] + whatIsThis(arr, p - 1);
  }
}