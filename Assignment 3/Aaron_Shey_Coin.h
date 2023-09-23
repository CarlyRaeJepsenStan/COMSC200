#include <string>
using namespace std;
#ifndef COIN_H

class Coin {
private:
  string sideUp;
  int sideValue;
  float value;

public:
  Coin();
  Coin(float);
  void toss();
  void setValue();
  string getSideUp() const;
  int getSideValue() const;
  float getValue() const;
};
#endif
