#include "Aaron_Shey_Odometer.h"
#include "Aaron_Shey_FuelGauge.h"
// 7.  I chose not to add a default constructor for the Odometer class, because
// I found it overly lengthy and likely unecessary
Odometer::Odometer(FuelGauge &fu, int m2) : fuelGauge(fu), m(m2) {}
// 8.  I wish there was a member initializer list-like syntax for returning
// variables.   This would make getters much more concise.
int Odometer::getMileage() const { return m; }
void Odometer::incrementMileage() {
  // 9.  Once again, I made use of a ternary operator here.
  m = ((m > 99999) ? m = 0 : m += 1);
  if (m % 24 == 0) {
    // 10.  Dot syntax is still usable on references.
    fuelGauge.decrementFuel();
  }
}