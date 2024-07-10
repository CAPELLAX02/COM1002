#include <stdio.h>

void solveTowers(int disks, int source, int dest, int temp);

int main(void) {
  int start = 1;
  int end = 3;
  int temp = 2;
  int total = 3;

  solveTowers(total, start, end, temp);
}

void solveTowers(int disks, int source, int dest, int temp) {
  if (disks == 1) {
    printf("%d --> %d\n", source, dest);
  }
  else {
    solveTowers(disks - 1, source, temp, dest);
    printf("%d --> %d\n", source, dest);
    solveTowers(disks - 1, temp, dest, source);
  }
}