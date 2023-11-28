#include "Aaron_Shey_Ship.h"
#include <string>
using std::string;

class CargoShip : public Ship {
private:
  int maxTonnage;

public:
  CargoShip(string n, string y, int m);
  int getMaxTonnage() const;
  void setMaxTonnage(int m);
  virtual void print() const;
};