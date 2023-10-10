#ifndef ODOMETER_H
#define ODOMETER_H
#include "Aaron_Shey_FuelGauge.h"
class Odometer {
private:
  int m;
  FuelGauge &fuelGauge;

public:
  Odometer();
  Odometer(FuelGauge &gauge);
  int getMileage() const;
  void incrementMileage();
};

#endif
