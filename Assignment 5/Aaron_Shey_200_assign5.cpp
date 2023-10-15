#include "Aaron_Shey_FuelGauge.h"
#include "Aaron_Shey_Odometer.h"
#include <iostream>
using namespace std;

int main() {
  FuelGauge f;
  while (f.getFuel() < 6) {
    f.incrementFuel();
    cout << "Gallons of fuel: " << f.getFuel() << "\n";
  }

  Odometer o(f, 0);
  while (f.getFuel() > 0) {
    cout << "Mileage: " << o.getMileage() << "\n";
    cout << "Fuel level: " << f.getFuel() << "\n";
    o.incrementMileage();
  }
  cout << "Mileage: " << o.getMileage() << "\n";
  cout << "Fuel level: " << f.getFuel() << "\n";
}
