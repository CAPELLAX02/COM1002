// Analysis of examination results

#include <stdio.h>

int main(void) {

  int passes = 0, failures = 0, student = 1;

  while (student <= 10) {
    printf("%s", "Enter results (1=pass, 2=fail): ");
    int result = 0;
    scanf("%d", &result);

    if (result == 1) {
      passes ++;
    } else {
      failures ++;
    }

    student ++;
  }

  printf("Passed %d\n", passes);
  printf("Failed %d\n", failures);

}