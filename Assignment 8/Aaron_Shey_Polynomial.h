#include <vector>
using namespace std;
class Polynomial {
private:
  // degree will be stored in location, and coefficients at that location
  vector<int> internal;

public:
  Polynomial operator+(const Polynomial);
  Polynomial operator-(const Polynomial);
  Polynomial operator=(const Polynomial);
  Polynomial operator+=(const Polynomial);
  Polynomial operator-=(const Polynomial);

  Polynomial();
};