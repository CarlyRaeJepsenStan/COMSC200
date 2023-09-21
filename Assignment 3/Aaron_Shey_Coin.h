#include <string>
using namespace std;
#ifndef COIN_H

class Coin {
private:
  string sideUp;

public:
  Coin();
  void toss();
  string getSideUp() const;
};
#endif
