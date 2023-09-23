#include "Aaron_Shey_Coin.h"
#include <cstdlib>
#include <string>
using namespace std;
Coin::Coin() : value(0.00) { Coin::toss(); }
Coin::Coin(float in) : value(in) { Coin::toss(); }
void Coin::toss() {
  bool st = (rand() % 2 == 0);
  sideUp = (st) ? "heads" : "tails";
  sideValue = (st) ? 1 : 0;
}
string Coin::getSideUp() const { return sideUp; }
int Coin::getSideValue() const { return sideValue; }
float Coin::getValue() const { return value; }
