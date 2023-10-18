#include <string>
using namespace std;
// 1.  This is the class header file for the Card class.  It was fairly
// straightforward.  One unusual line I had to write was putting the static
// string arrays as public.  Otherwise, this file is pretty simple.
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