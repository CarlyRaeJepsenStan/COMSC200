#include "Aaron_Shey_Card.h"
#include <cstdlib>
#include <string>
#include <vector>
using namespace std;
class DeckOfCards {
private:
  vector<Card> deck;
  int currentCard;

public:
  DeckOfCards();
  void shuffle();
  Card dealCard();
};