// Creating and traversing a binary tree preorder, inorder, and postorder
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct treeNode { 
  struct treeNode *leftPtr;
  int data;
  struct treeNode *rightPtr;
};

typedef struct treeNode TreeNode;
typedef TreeNode *TreeNodePtr;

void insertNode(TreeNodePtr *treePtr, int value);
void inOrder(TreeNodePtr treeNode);
void preOrder(TreeNodePtr treeNode);
void postOrder(TreeNodePtr treeNode);

int main(void) { 
  TreeNodePtr rootPtr = NULL;

  srand(time(NULL));
  puts("The numbers being placed in the tree are:");

  for (int i = 1; i <= 10; i++) { 
    int item = rand() % 15;
    printf("%3d", item);
    insertNode(&rootPtr, item);
  }

  puts("\n\nThe preOrder traversal is:");
  preOrder(rootPtr);

  puts("\n\nThe inOrder traversal is:");
  inOrder(rootPtr);

  puts("\n\nThe postOrder traversal is:");
  postOrder(rootPtr);
}


void insertNode(TreeNodePtr *treePtr, int value) { 
  if (*treePtr == NULL) { 
    *treePtr = malloc(sizeof(TreeNode));

    if (*treePtr != NULL) { 
      (*treePtr)->data = value;
      (*treePtr)->leftPtr = NULL;
      (*treePtr)->rightPtr = NULL;
    } else {
      printf("%d not inserted. No memory available.\n", value);
    }
  } else { 
    if (value < (*treePtr)->data) { 
      insertNode(&((*treePtr)->leftPtr), value);
    } else if (value > (*treePtr)->data) { 
      insertNode(&((*treePtr)->rightPtr), value);
    } else { 
      printf("%s", "dup");
    }
  }
}


void inOrder(TreeNodePtr treePtr) { 
  if (treePtr != NULL) { 
    inOrder(treePtr->leftPtr);
    printf("%3d", treePtr->data);
    inOrder(treePtr->rightPtr);
  }
}


void preOrder(TreeNodePtr treePtr) { 
  if (treePtr != NULL) { 
    printf("%3d", treePtr->data);
    preOrder(treePtr->leftPtr);
    preOrder(treePtr->rightPtr);
  }
}


void postOrder(TreeNodePtr treePtr) { 
  if (treePtr != NULL) { 
    postOrder(treePtr->leftPtr);
    postOrder(treePtr->rightPtr);
    printf("%3d", treePtr->data);
  }
}