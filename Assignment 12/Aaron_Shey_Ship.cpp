#include "Aaron_Shey_Ship.h"
#include <iostream>
using std::cout;

Ship::Ship(string n, string y) {
  name = n;
  year = y;
}

string Ship::getName() const { return name; }

string Ship::getYear() const { return year; }

void Ship::setName(string n) { name = n; }

void Ship::setYear(string y) { year = y; }

void Ship::print() const {
  cout << "Name: " << name << "\n";
  cout << "Year: " << year << "\n";
}
// 7.  Here is the definition for the destructor, as promised.  It is set to
// default.
Ship::~Ship() = default;
