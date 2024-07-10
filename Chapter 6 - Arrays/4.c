// Display a bar chart.
#include <stdio.h>

int main(void) {
  int a[5] = {19, 3, 15, 7, 11};

  printf("%s%13s%17s\n", "Element", "Value", "Bar Chart");

  for (int i = 0; i < 5; i++) {
    printf("%7d%13d%8s", i, a[i], "");

    for (int j = 1; j <= a[i]; j++) {
      printf("%c", '*');
    }

    puts("");
  }
}