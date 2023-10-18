#include "Aaron_Shey_Card.h"
#include <cstdlib>
#include <string>
#include <vector>
using namespace std;

// 4.  This is the header file for the DeckOfCards class.  It features all the
// required variables and functions.
class DeckOfCards {
private:
  vector<Card> deck;
  int currentCard;

public:
  DeckOfCards();
  void shuffle();
  Card dealCard();
  bool moreCards();
};