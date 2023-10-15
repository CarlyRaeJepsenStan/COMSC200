#include <string>
using namespace std;

class Card {
private:
  int face;
  int suit;

public:
  static const string faces[];
  static const string suits[];
  Card(int, int);

  string toString() const;
};