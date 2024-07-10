// Card shuffling and dealing program using structures
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct card { 
  const char *face;
  const char *suit;
};

typedef struct card Card;

void fillDeck(Card * const deck, const char *faces[], const char *suits[]);
void shuffle(Card * const deck);
void deal(const Card * const deck);

int main(void) { 
  Card deck[52];

  const char *faces[] = { "Ace", "Deuce", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King" };

  const char *suits[] = { "Hearts", "Diamonds", "Clubs", "Spades" };

  srand(time(NULL)); // randomize

  fillDeck(deck, faces, suits);
  shuffle(deck);
  deal(deck);
}

void fillDeck(Card * const deck, const char *faces[], const char *suits[]) { 
  for (int i = 0; i < 52; i++) { 
    deck[i].face = faces[i % 13];
    deck[i].suit = suits[i / 13];
  }
}

void shuffle(Card * const deck) { 
  for (int i = 0; i < 52; i++) { 
    int j = rand() % 13;
    Card temp = deck[i];
    deck[i] = deck[j];
    deck[j] = temp;
  }
}

void deal(const Card * const deck) { 
  for (int i = 0; i < 52; i++) { 
    printf("%5s of %-8s%s", deck[i].face, deck[i].suit, (i + 1) % 4 ? " " : "\n");
  }
}