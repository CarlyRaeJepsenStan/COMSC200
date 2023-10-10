#include "Aaron_Shey_FuelGauge.h"
#include <iostream>
FuelGauge::FuelGauge() : f(0) {}
FuelGauge::FuelGauge(int in) : f() {}
void FuelGauge::setFuel(int in) { f = in; }
int FuelGauge::getFuel() const { return f; }
void FuelGauge::incrementFuel() { f = (f < 15) ? f++ : f; }
void FuelGauge::decrementFuel() { f = (f > 0) ? f-- : f; }
