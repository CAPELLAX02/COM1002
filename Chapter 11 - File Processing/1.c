// Creating a sequential file
#include <stdio.h>

int main(void) { 
  FILE *filePtr = NULL;

  if ((filePtr = fopen("clients.txt", "w")) == NULL) { 
    puts("File could not be opened.");
  } else { 
    puts("Enter the account, name, and balance:");
    puts("(Enter EOF (CTRL + Z) to end input)");
    printf("%s", "? ");
  }

  int account = 0;
  char name[30] = "";
  double balance = 0.0;

  scanf("%d%29s%lf", &account, &name, &balance);

  while (!feof(stdin)) { 
    fprintf(filePtr, "%d %s %.2f\n", account, name, balance);
    printf("%s", "? ");
    scanf("%d%29s%lf", &account, &name, &balance);
  }

  fclose(filePtr);
 }