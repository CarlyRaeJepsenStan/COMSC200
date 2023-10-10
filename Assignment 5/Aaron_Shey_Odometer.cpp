#include "Aaron_Shey_Odometer.h"
#include "Aaron_Shey_FuelGauge.h"
int Odometer::getMileage() const { return m; }
void Odometer::incrementMileage() { m = ((m > 99999) ? m = 0 : m++); }
Odometer::Odometer(FuelGauge &fu, int m2) : fuelGauge(fu), m(m2) {}
