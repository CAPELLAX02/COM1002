// Applying sizeof to an array name return the number of bytes in the array.

#include <stdio.h>
#define SIZE 20

size_t getSize(const float *ptr);

int main(void) { 
  float arr[SIZE];

  printf("Number of bytes in the array is %zu\n", sizeof(arr)); // 80
  printf("Number of bytes returned by getSize is %zu\n", getSize(arr)); // 4
  
  // Even though function getSize receives an array of 20 elements as an argument,the function’s parameter ptr is simply a pointer to the array’s first element. When youuse sizeof with a pointer, it returns the pointer’s size, not the size of the item to which it points
}

size_t getSize(const float *ptr) {
  return sizeof(ptr);
}