/*
    following program that inputs one five-digit
    number, separates the number into its individual digits and displays the digits separated from one another by three spaces.
*/

#include <stdio.h>

int main(void) {
  
  int number;

  printf("Enter a five-digit number: ");
  scanf("%d", &number);

  printf("%d   ", number / 10000);
  number %= 10000;

  printf("%d   ", number / 1000);
  number %= 1000;

  printf("%d   ", number / 100);
  number %= 100;

  printf("%d   ", number / 10);
  number %= 10;

  printf("%d   ", number);
}