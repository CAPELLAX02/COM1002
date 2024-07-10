 // Transaction-processing program reads a random-access file sequentially, updates data already written to the file, creates new data to be placed in the file, and deletes data previously stored in the file.
 #include <stdio.h>

 struct clientData {
  int account;
  char lastName[15];
  char firstName[10];
  double balance;
 };

int enterChoice(void);
void textFile(FILE *readPtr);
void updateRecord(FILE *filePtr);
void newRecord(FILE *filePtr);
void deleteRecord(FILE *filePtr);

int main(void) { 
  FILE *filePtr = NULL;
  if ((filePtr = fopen("accounts.dat", "rb+")) == NULL) { 
    puts("File could not be opened.");
  } else { 
    int choice = 0;
    while ((choice = enterChoice()) != 5) { 
      switch (choice) { 
        case 1:
          textFile(filePtr);
          break;
        case 2:
          updateRecord(filePtr);
          break;
        case 3:
          newRecord(filePtr);
          break;
        case 4:
          deleteRecord(filePtr);
          break;
        default:
          puts("Invalid choice");
          break;
      }
    }
    fclose(filePtr);
  }
}

void textFile(FILE *readPtr) { 
  FILE *writePtr = NULL;
  if ((writePtr = fopen("accounts.txt", "w")) == NULL) {  
    puts("File could not be opened.");
  } else { 
    rewind(readPtr);
    fprintf(writePtr, "%-6s%-16s%-11s%10s\n", "Acct", "Last Name", "First Name", "Balance");

    while (!feof(readPtr)) { 
      struct clientData client = { 0, "", "", 0.0 };
      size_t result = fread(&client, sizeof(struct clientData), 1, readPtr);

      if (result != 0 && client.account != 0) { 
        fprintf(writePtr, "%-6d%-16s%-11s%10.2f\n", client.account, client.lastName, client.firstName, client.balance);
      }
    }
    fclose(writePtr);
  }
}

void updateRecord(FILE *filePtr) { 
  printf("%s", "Enter account to update (1 - 100): ");
  int account;
  scanf("%d", &account);

  fseek(filePtr, (account - 1) * sizeof(struct clientData), SEEK_SET);

  struct clientData client = { 0, "", "", 0.0 };
  fread(&client, sizeof(struct clientData), 1, filePtr);

  if (client.account == 0) { 
    printf("Account #%d has no information.\n", account);
  } else { 
    printf("%-6d%-16s%-11s%10.2f\n\n", client.account, client.lastName, client.firstName, client.balance);

    printf("%s", "Enter charge (+) or payment (-): ");
    double transaction;
    scanf("%lf", &transaction);

    client.balance += transaction;

    printf("%-6d%-16s%-11s%10.2f\n\n", client.account, client.lastName, client.firstName, client.balance);

    fseek(filePtr, (account - 1) * sizeof(struct clientData), SEEK_SET);

    fwrite(&client, sizeof(struct clientData), filePtr);
  }
}

void newRecord(FILE *filePtr) { 
  printf("%s", "Enter new account number (1 - 100): ");
  int account;
  scanf("%d", &account);

  fseek(filePtr, (account - 1) * sizeof(struct clientData), SEEK_SET);

  struct clientData client = { 0, "", "", 0.0 };

  fread(&client, sizeof(struct clientData), 1, filePtr);

  if (client.account != 0) { 
    printf("Account #%d already contains information.\n", client.account);
  } else { 
    printf("%s", "Enter lastName, firstName, balance\n? ");
    scanf("%14s%9s%lf", &client.lastName, &client.firstName, &client.balance);

    client.account = account;

    fseek(filePtr, (client.account - 1) * sizeof(struct clientData), SEEK_SET);

    fwrite(&client, sizeof(struct clientData), 1, filePtr);
  }
}

void deleteRecord(FILE *filePtr) { 
  printf("%s", "Enter account number to delete (1 - 100): ");
  int account;
  scanf("%d", &account);

  fseek(filePtr, (account - 1) * sizeof(struct clientData), SEEK_SET);

  struct clientData client = { 0, "", "", 0.0 };

  fread(&client, sizeof(struct clientData), 1, filePtr);

  if (client.account == 0) { 
    printf("Account %d does not exist.\n", account);
  } else { 
    fseek(filePtr, (account - 1) * sizeof(struct clientData), SEEK_SET);

    struct clientData blankClient = { 0, "", "", 0.0 };

    fwrite(&blankClient, sizeof(struct clientData), 1, filePtr);
  }
}

int enterChoice(void) { 
  printf("%s", "\nEnter your choice\n" "1 - store a formatted text file of accounts called\n" " \"accounts.txt\" for printing\n" "2 - update an account\n" "3 - add a new account\n" "4 - delete an account\n" "5 - end program\n? ");

  int menuChoice;
  scanf("%d", &menuChoice);
  return menuChoice;
}