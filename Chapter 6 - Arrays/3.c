// Analyzing a student poll.
#include <stdio.h>
#define RES_SIZE 20
#define FREQ_SIZE 6

int main(void) {
  int responses[RES_SIZE] = {1, 2, 5, 4, 3, 5, 2, 1, 3, 1, 4, 3, 3, 3, 2, 3, 3, 2, 2, 5};

  int frequency[FREQ_SIZE] = {0};

  for (size_t i = 0; i < RES_SIZE; i++) {
    frequency[responses[i]]++;
  }

  printf("%s%12s\n", "Rating", "Frequency");

  for (size_t rating = 1; rating < FREQ_SIZE; rating++) {
    printf("%6zu%12d\n", rating, frequency[rating]);
  }

  for (size_t i = 0; i < FREQ_SIZE; i++) {
    printf("%d ", frequency[i]);
  }
}