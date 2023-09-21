#include "Aaron_Shey_Coin.h";
#include <ctime>
#include <string>
using namespace std;
Coin::Coin() { string sideUp = (time(0) % 2 == 0) ? "heads" : "tails"; }
void Coin::toss() { string sideUp = (time(0) % 2 == 0) ? "heads" : "tails"; }
string Coin::getSideUp() const { return sideUp; }
