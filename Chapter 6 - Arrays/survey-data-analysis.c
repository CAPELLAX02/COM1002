// Data analysis with arrays computing the mean, median and the mode of the data.
#include <stdio.h>

void mean(const int arr[]);
void median(int arr[]);
void mode(int freq[], const int arr[]);
void bubbleSort(int arr[]);
void printArray(const int arr[]);

int main(void) {
  int freq[10] = {0};

  int arr[99] = {6, 7, 8, 9, 8, 7, 8, 9, 8, 9, 7, 8, 9, 5, 9, 8, 7, 8, 7, 8, 6, 7, 8, 9, 3, 9, 8, 7, 8, 7, 7, 8, 9, 8, 9, 8, 9, 7, 8, 9, 6, 7, 8, 7, 8, 7, 9, 8, 9, 2, 7, 8, 9, 8, 9, 8, 9, 7, 5, 3, 5, 6, 7, 2, 5, 3, 9, 4, 6, 4, 7, 8, 9, 6, 8, 7, 8, 9, 7, 8, 7, 4, 4, 2, 5, 3, 8, 7, 5, 6, 4, 5, 6, 1, 6, 5, 7, 8, 7};

  mean(arr);
  median(arr);
  mode(freq, arr);
}

void bubbleSort(int arr[]) {
  for (int i = 0; i < 99; i++) {
    for (int j = 0; j < 98 - i; j++) {
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

void printArray(const int arr[]) {
  for (int i = 0; i < 99; i++) {
    printf("%d ", arr[i]);
  }
  puts("");
}


void mean(const int arr[]) {
  int total = 0;

  for (int i = 0; i < 99; i++) {
    total += arr[i];
  }

  float average = (float) total / 99;

  printf("Average: %.2f\n", average);
}


void median(int arr[]) {
  printf("Unsorted Array: ");
  printArray(arr);
  bubbleSort(arr);
  printf("Sorted Array: ");
  printArray(arr);

  printf("Median: %u", arr[99 / 2]);
}


void mode(int freq[], const int arr[]) {
  // initialize the frequences to 0.
  for (int i = 0; i < 10; i++) {
    freq[i] = 0;
  }

  // summarize  frequencies.
  for (int i = 0; i < 99; i++) {
    freq[arr[i]]++;
  }

  int largest = 0;
  int modeValue = 0;

  // keep track of mode value and largest frequency value
  for (int counter = 0; counter < 10; counter++) {
    if (freq[counter] > largest) {
      largest = freq[counter];
      modeValue = counter;
    }

    for (int j = 1; j <= freq[counter]; j++) {
      printf("%s", "*");
    }

    puts("");
  }

  printf("Largest: %d", largest);
  printf("Mode: %d", modeValue);
}