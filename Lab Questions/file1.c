#include <stdio.h>

int main(void) { 
  FILE *input, *output;

  int number, sum = 0, min, max, first = 1;

  input = fopen("input1.txt", "r");
  if (input == NULL) {
    printf("Error: Could not open input file\n");
    return 1;
  }

  while (fscanf(input, "%d", &number) != EOF) { 
    sum += number;
        if (first) {
            min = max = number;
            first = 0;
        } else {
            if (number < min) {
                min = number;
            }
            if (number > max) {
                max = number;
            }
        }
  }

  fclose(input);

  output = fopen("output1.txt", "w");
  if (output == NULL) { 
    printf("Error: Could not open output file\n");
    return 1;
  }

  fprintf(output, "Sum: %d\nMaximum: %d\nMinimum: %d", sum, max, min);

  fclose(output);

  printf("Results written to output1.txt\n");
}