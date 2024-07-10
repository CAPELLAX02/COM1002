// Reading and printing a sequential file
#include <stdio.h>

int main(void) { 
  FILE *filePtr = NULL;

  if ((filePtr = fopen("clients.txt", "r")) == NULL) { 
    puts("File could not be opened.");
  } else { 
    int account = 0;
    char name[30];
    double balance = 0.0;

    printf("%-10s%-13s%s\n", "Account", "Name", "Balance");
    fscanf(filePtr, "%d%29s%lf", &account, &name, &balance);

    while (!feof(filePtr)) { 
      printf("%-10d%-13s%7.2f\n", account, name, balance);
      fscanf(filePtr, "%d%29s%lf", &account, &name, &balance);
    }

    fclose(filePtr);
  }
}