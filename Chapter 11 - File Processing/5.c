// Writing data randomly to a random-access file.
#include <stdio.h>

struct clientData 
{
  int account;
  char lastName[15];
  char firstName[10];
  double balance;
};

int main(void) { 
  FILE *filePtr = NULL;

  if ((filePtr = fopen("accounts.dat", "rb+")) == NULL) { 
    puts("File could not be opened.");
  }
  else {
    struct clientData client = { 0, "", "", 0.0 };

    printf("%s", "Enter account number (1 to 100, 0 to end input): ");
    scanf("%d", &client.account);

    while (client.account != 0) { 
      printf("%s", "Enter lastName, firstName, balance: ");

      fscanf(stdin, "%14s%9s%lf", &client.lastName, &client.firstName, &client.balance);

      fseek(filePtr, (client.account - 1) * sizeof(struct clientData), SEEK_SET);

      fwrite(&client, sizeof(struct clientData), 1, filePtr);

      printf("%s", "\nEnter account number: ");

      scanf("%d", &client.account);
    }

    fclose(filePtr);
  }
}
