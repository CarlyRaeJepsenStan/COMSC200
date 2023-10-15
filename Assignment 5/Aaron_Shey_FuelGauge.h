#ifndef FUELGAUGE_H
#define FUELGAUGE_H
// 1.  This is the FuelGauge class, with all the requisite member functions.
class FuelGauge {
private:
  int f;

public:
  // 2.  The first function is the default constructor.
  FuelGauge();
  FuelGauge(int);
  void incrementFuel();
  void decrementFuel();
  int getFuel() const;
  void setFuel(int);
  // 3.  This function is a default setter - it can initialize the variable `f`
  // without a parameter
  void setFuel();
};
#endif