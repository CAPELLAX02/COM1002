// Creating a random-access file sequentially
#include <stdio.h>

struct clientData { 
  int account;
  char lastName[15];
  char firstName[20];
  double balance;
};

int main(void) { 
  FILE *filePtr = NULL;

  if ((filePtr = fopen("accounts.dat", "wb")) == NULL) { 
    puts("File could not be opened.");
  } else {
    struct clientData blankClient = { 0, "", "", 0.0 };

    for (int i = 1; i <= 100; i++) { 
      fwrite(&blankClient, sizeof(struct clientData), 1, filePtr);
    }

    fclose(filePtr);
  }
}