#include "Aaron_Shey_FuelGauge.h"
#include <iostream>
// 4.  The constructors make use of member initializer lists, making them more
// concise.
FuelGauge::FuelGauge() : f(0) {}
FuelGauge::FuelGauge(int in) : f() {}
void FuelGauge::setFuel(int in) { f = in; }
void FuelGauge::setFuel() { f = 0; }
int FuelGauge::getFuel() const { return f; }
// 5. For the mutator functions, I chose to use ternary operators, to further
//  shorten the code.
void FuelGauge::incrementFuel() { f = (f < 15) ? f += 1 : f; }
void FuelGauge::decrementFuel() { f = (f > 0) ? f -= 1 : f; }