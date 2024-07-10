// A simple stack program
#include <stdio.h>
#include <stdlib.h>

struct stackNode { 
  int data;
  struct stackNode *nextPtr;
};

typedef struct stackNode StackNode;
typedef StackNode *StackNodePtr;


void push(StackNodePtr *topPtr, int info);
int pop(StackNodePtr *topPtr);
int isEmpty(StackNodePtr topPtr);
void printStack(StackNodePtr currentPtr);
void instructions(void);


int main(void) {
  StackNodePtr stackPtr = NULL;
  int choice, value;

  instructions();

  printf("%s", "? ");
  scanf("%d", &choice);

  while (choice != 3) { 
    switch (choice) { 
      case 1:
        printf("%s", "Enter an integer: ");
        scanf("%d", &value);
        push(&stackPtr, value);
        printStack(stackPtr);
        break;
      case 2:
        if (!isEmpty(stackPtr)) { 
          printf("The popped value is %d.\n", pop(&stackPtr));
        }
        printStack(stackPtr);
        break;
      default:
        puts("Invalid choice.\n");
        instructions();
        break;
    }
    printf("%s", "? ");
    scanf("%d", &choice);
  }
  puts("End of run.");
}


void instructions(void) { 
  puts("Enter choice:\n\t1 to push a value on the stack\n\t2 to pop a value off the stack\n\t3 to end program");
}


void push(StackNodePtr *topPtr, int info) { 
  StackNodePtr newPtr = malloc(sizeof(StackNode));

  if (newPtr != NULL) { 
    newPtr -> data = info;
    newPtr -> nextPtr = *topPtr;
    *topPtr = newPtr;
  }
  else { 
    printf("%d not inserted. No memory available.\n", info);
  }
}


int pop(StackNodePtr *topPtr) { 
  StackNodePtr tempPtr = *topPtr;
  int popValue = (*topPtr) -> data;
  *topPtr = (*topPtr) -> nextPtr;
  free(tempPtr);
  return popValue;
}


void printStack(StackNodePtr currentPtr) { 
  if (currentPtr == NULL) { 
    puts("The stack is empty.\n");
  }
  else { 
    puts("The stack is:");
    while (currentPtr != NULL) { 
      printf("%d --> ", currentPtr -> data);
      currentPtr = currentPtr -> nextPtr;
    }
    puts("NULL\n");
  }
}


int isEmpty(StackNodePtr topPtr) { 
  return topPtr == NULL;
}