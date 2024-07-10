// Treating character arrays as strings.
#include <stdio.h>
#define SIZE 20

int main(void) {
  char str1[SIZE] = "";
  char str2[] = "string literal";

  printf("%s", "Enter a string (no longer than 19 characters): ");
  scanf("%19s", str1);

  printf("str1 is : %s\nstr2 is: %s\n", str1, str2);
  puts("str1 with spaces between characters is printed out below:");

  for (size_t i = 0; i < SIZE && str1[i] != '\0'; i++) {
    printf("%c ", str1[i]);
  }
}