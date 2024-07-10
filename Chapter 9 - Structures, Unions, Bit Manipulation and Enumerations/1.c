#include <stdio.h>

struct card { 
  const char *face;
  const char *suit;
};

int main(void) { 
  struct card myCard;

  myCard.face = "Ace";
  myCard.suit = "Spades";

  struct card *cardPtr = &myCard;

  printf("%s of %s\n", myCard.face, myCard.suit);
  // Ace of Spades
  printf("%s of %s\n", cardPtr -> face, cardPtr -> suit);
  // Ace of Spades
  printf("%s of %s\n", (*cardPtr).face, (*cardPtr).suit);
  // Ace of Spades
}