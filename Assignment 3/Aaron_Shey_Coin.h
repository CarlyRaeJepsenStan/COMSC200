// 1. This is the class specification file.
#include <string>
using namespace std;
#ifndef COIN_H

class Coin {
private:
  string sideUp;
  // 2.   I added two new variables.  sideValue stores 1 or 0, depending on the
  // value of sideUp and value contains the decimal value of the coin (0.25,
  // 0.10, etc)
  int sideValue;
  float value;

public:
  Coin();
  // 3. I added a constructor to allow initialization of the coins in an array.
  Coin(float);
  void toss();
  void setValue();
  string getSideUp() const;
  int getSideValue() const;
  float getValue() const;
};
#endif
