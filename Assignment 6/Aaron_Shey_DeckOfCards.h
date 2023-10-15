#include "Aaron_Shey_Card.h"
#include <vector>
using namespace std;
#ifndef DECKOFCARDS_H
#define DECKOFCARDS_H
class DeckOfCards {
private:
  vector<Card> deck;
  int currentCard;

public:
  DeckOfCards();
  void shuffle();
  Card dealCard();
};
#endif