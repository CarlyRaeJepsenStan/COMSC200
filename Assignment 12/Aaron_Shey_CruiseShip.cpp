#include "Aaron_Shey_CruiseShip.h"
#include <iostream>
// 10.  Here's another cool trick I used - by using std::cout instead of
// namespace std, my code is safer while retaining its concision if I had used
// namespace std;
using std::cout;
CruiseShip::CruiseShip(string n, string y, int m) : Ship(n, y) {
  maxPassengers = m;
}

int CruiseShip::getMaxPassengers() const { return maxPassengers; }

void CruiseShip::setMaxPassengers(int m) { maxPassengers = m; }

// 11.  Here's the redefined print function.
void CruiseShip::print() const {
  cout << "Name: " << getName() << "\n";
  cout << "Max Passengers: " << maxPassengers << "\n";
}
