#ifndef FUELGAUGE_H
#define FUELGAUGE_H
class FuelGauge {
private:
  int f;

public:
  FuelGauge();
  FuelGauge(int);
  void incrementFuel();
  void decrementFuel();
  int getFuel() const;
  void setFuel(int);
};
#endif FUELGAUGE_H
