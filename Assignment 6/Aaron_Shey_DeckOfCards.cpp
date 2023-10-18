#include "Aaron_Shey_DeckOfCards.h"
#include <vector>
using namespace std;
#ifndef DECKOFCARDS_H
#define DECDECKOFCARDS_H

// 5.  This is the constructor for the deck of cards - I chose to use two nested
// loops, as it was the most clear and concise method I could think of.
DeckOfCards::DeckOfCards() {
  for (int outer = 0; outer < 13; outer++) {
    for (int inner = 0; inner < 4; inner++) {
      deck.push_back(Card(outer, inner));
    }
  }
};

// 6.  This is the shuffling algorithm - I again chose to make it
// straightforward, without using references or pointers, as this form makes the
// most sense to me.
void DeckOfCards::shuffle() {
  for (int i = 0; i < 52; i++) {
    int s = rand() % 53;
    Card temp = deck[i];
    deck[i] = deck[s];
    deck[s] = temp;
  }
};

// 7.  I think at this step I was supposed to use the currentCard member
// integer, but I found this method was more concise.  I returned the first
// card, then deleted it from the vector.  A temporary variable is necessary,
// because the code after the return line isn't executed.'
Card DeckOfCards::dealCard() {
  Card c = deck[0];
  deck.erase(deck.begin());
  return c;
};

// 8.  I found this function to be rather pleasant - I merely had to invert the
// truth value of the empty property built into vectors.  Inversion was
// necessary, because when the deck is empty, there are no more cards to return.
bool DeckOfCards::moreCards() { return !deck.empty(); }
#endif