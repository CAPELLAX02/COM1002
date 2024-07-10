#include <stdio.h>

int main(void) { 
  FILE *input = NULL;
  FILE *output = NULL;
  int num, originalNum, reversedNum = 0, remainder;

  input = fopen("input2.txt", "r");
  if (input == NULL) {
    printf("Could not open input2.txt file\n");
    return 1;
  }

  while (fscanf(input, "%d", &num) != EOF) { 
    originalNum = num;

    while (num != 0) { 
      remainder = num % 10;
      reversedNum = reversedNum * 10 + remainder;
      num /= 10;
    }
  }

  output = fopen("output2.txt", "w");
  if (output == NULL) { 
    printf("Could not open output2.txt file\n");
    return 1;
  }

  if (reversedNum == originalNum) {
    fprintf(output, "%d is palindrome.", originalNum);
  } else { 
    fprintf(output, "%d is NOT palindrome.", originalNum);
  }

  fclose(output);

  printf("Result written to output2.txt file.\n");
}