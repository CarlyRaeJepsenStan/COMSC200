#include "Aaron_Shey_CargoShip.h"
#include <iostream>
using std::cout;

CargoShip::CargoShip(string n, string y, int m) : Ship(n, y) { maxTonnage = m; }

int CargoShip::getMaxTonnage() const { return maxTonnage; }

void CargoShip::setMaxTonnage(int m) { maxTonnage = m; }

void CargoShip::print() const {
  cout << "Name: " << getName() << "\n";
  cout << "Max Tonnage: " << maxTonnage << "\n";
}
