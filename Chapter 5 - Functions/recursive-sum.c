#include <stdio.h>

int sum(int n);

int main(void) {
  int a;
  printf("1 dan kaca kadar olan sayilar toplansin?: ");
  scanf("%d", &a);
  printf("1 + 2 + 3 + ... + %d = %d", a, sum(a));
}

int sum(int n) {
  if (n == 0) {
    return n;
  } else {
    return n + sum(n - 1);
  }
}