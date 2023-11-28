#include "Aaron_Shey_Ship.h"
#include <string>
using std::string;

class CruiseShip : public Ship {
  // 8. Because CruiseShip inherits from Ship, it also inherits all of Ship's
  // members, including the private ones.
private:
  int maxPassengers;

public:
  CruiseShip(string n, string y, int m);
  // 9.  Here are the CruiseShip specific getters and setters, along with the
  // redefined print function.
  int getMaxPassengers() const;
  void setMaxPassengers(int m);
  virtual void print() const;
};
