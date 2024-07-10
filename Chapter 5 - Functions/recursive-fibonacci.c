#include <stdio.h>

unsigned long long int fibonnacci(int n) {
  if (n == 0 || n == 1) {
    return n;
  } else {
    return fibonnacci(n - 1) + fibonnacci(n - 2);
  }
}

int main(void) {
  for (int i = 0; i <= 10; i++) {
    printf("Fibbonacci(%d) = %llu\n", i, fibonnacci(i));
  }

  printf("Fibbonacci(20) = %llu\n", fibonnacci(20));
  printf("Fibbonacci(30) = %llu\n", fibonnacci(30));
  printf("Fibbonacci(40) = %llu\n", fibonnacci(40));
}
