#include <vector>
using namespace std;
class Polynomial {
private:
  // degree will be stored in location, and coefficients at that location
  vector<int> internal;

public:
  Polynomial();
  void enterTerms();
  int operator[](int);
  Polynomial operator+(const Polynomial &);
  Polynomial operator-(const Polynomial);
  Polynomial operator=(const Polynomial);
  Polynomial operator+=(const Polynomial);
  Polynomial operator-=(const Polynomial);
  void printPolynomial();
};