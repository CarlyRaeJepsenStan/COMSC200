#include "Aaron_Shey_Coin.h"
#include <cstdlib>
#include <string>
using namespace std;
// 4. I used a member initializer list to make the value of the coin 0 by
// default
Coin::Coin() : value(0.00) { toss(); }
// 5. I used a member initializer list to set the value of the coin to the
// parameter. I particularly enjoy this syntax - it looks neat and elegant, not
// something I expected from a nearly twenty year old language.
Coin::Coin(float in) : value(in) { toss(); }
// 6. Here I defined the toss() function used in all the above functions.
//  I didn't have to use Coin:: because the body of a member function has access
//  to everything else in a class.
void Coin::toss() {

  bool st = (rand() % 2 == 0);
  sideUp = (st) ? "heads" : "tails";
  sideValue = (st) ? 1 : 0;
}
string Coin::getSideUp() const { return sideUp; }
int Coin::getSideValue() const { return sideValue; }
float Coin::getValue() const { return value; }
