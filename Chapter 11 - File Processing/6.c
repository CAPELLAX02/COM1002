// Reading a random-access file sequentially
#include <stdio.h>

struct clientData { 
  int account;
  char lastName[15];
  char firstName[10];
  double balance;
};

int main(void) { 
  FILE *filePtr = NULL;

  if ((filePtr = fopen("accounts.dat", "rb")) == NULL) { 
    puts("File could not be opened.");
  } 
  else { 
    printf("%-6s%-16s%-11s%10s\n", "Acct", "Last Name", "First Name", "Balance");

    while (!feof(filePtr)) { 
      struct clientData client = { 0, "", "", 0.0 };
      size_t result = fread(&client, sizeof(struct clientData), 1, filePtr);

      if (result != 0 && client.account != 0) { 
        printf("%-6d%-16s%-11s%10.2f\n", client.account, client.lastName, client.firstName, client.balance);
      }
    }

    fclose(filePtr);
  }
}