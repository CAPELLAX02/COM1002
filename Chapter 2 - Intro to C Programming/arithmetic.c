/*
    Following program that inputs
    three different integers from the keyboard, then displays the sum, the average, the
    product, the smallest and the largest of these numbers. 
*/

#include <stdio.h>

int main(void) {

  int a, b, c;

  printf("Enter three different integers: ");
  scanf("%d%d%d", &a, &b, &c);

  int sum, average, product, smallest, largest;

  sum = a + b + c;

  average = sum / 3;

  product = a * b * c;

  if (a < b < c) {
    smallest = a;
    largest = c;
  } else if (a < c < b) {
    smallest = a;
    largest = b;
  } else if (b < c < a) {
    smallest = b;
    largest = a;
  } else if (b < a < c) {
    smallest = b;
    largest = c;
  } else if (c < a < b) {
    smallest = c;
    largest = b;
  } else if (c < b < a) {
    smallest = c;
    largest = a;
  }

  printf("Sum is %d\n", sum);
  printf("Average is %d\n", average);
  printf("Product is %d\n", product);
  printf("Smallest is %d\n", smallest);
  printf("Largest is %d\n", largest);

}