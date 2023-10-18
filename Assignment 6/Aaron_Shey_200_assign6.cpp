#include "Aaron_Shey_DeckOfCards.h"
#include <iostream>
using namespace std;

int main() {
  // 9.  This is the appropiate place to seed the random number generator
  // provided by cstdlib - I routinely forget this.
  srand(time(0));
  DeckOfCards d = DeckOfCards();
  d.shuffle();
  // 10.  I added a sentinel variable, to make the program output easier to
  // read.
  int r = 0;
  while (d.moreCards()) {
    r++;
    cout << d.dealCard().toString();
    // 11. every 5 cards, a return is inserted into the output.
    if (r % 5 == 0 && r != 0) {
      cout << "\n";
    }
  }
}