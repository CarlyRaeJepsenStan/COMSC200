#ifndef ODOMETER_H
#define ODOMETER_H
#include "Aaron_Shey_FuelGauge.h"
class Odometer {
private:
  int m;
  // 6.  I chose to use a reference for the class.
  FuelGauge &fuelGauge;

public:
  Odometer(FuelGauge &, int);
  int getMileage() const;
  void incrementMileage();
};

#endif