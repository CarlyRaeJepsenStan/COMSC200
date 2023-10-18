#include "Aaron_Shey_DeckOfCards.h"

using namespace std;
#ifndef DECKOFCARDS_H
#define DECDECKOFCARDS_H
DeckOfCards::DeckOfCards() {
  for (int outer = 0; outer < 13; outer++) {
    for (int inner = 0; inner < 4; inner++) {
      deck.push_back(Card(outer, inner));
    }
  }
};
void DeckOfCards::shuffle() {
  for (Card i : deck) {
  }
};
Card DeckOfCards::dealCard(){return deck[rand() % 53]};
#endif