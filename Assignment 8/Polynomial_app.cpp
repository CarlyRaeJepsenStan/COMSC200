#include "Aaron_Shey_Polynomial.h"
#include <iostream>
using namespace std;

int main() {
  Polynomial a, b, c, t;

  a.enterTerms();
  b.enterTerms();
  // t = a; // save the value of a
  cout << "\nt is:\n";
  t.printPolynomial();
  cout << "\nFirst polynomial is:\n";
  a.printPolynomial();
  cout << "\nSecond polynomial is:\n";
  b.printPolynomial();
  cout << "\nAdding the polynomials yields:\n";
  c = a + b;
  c.printPolynomial();
  cout << "\n+= the polynomials yields:\n";
  a += b;
  a.printPolynomial();
  cout << "\nSubtracting the polynomials yields:\n";
  a = t; // reset a to original value
  c = a - b;
  c.printPolynomial();
  cout << "\n-= the polynomials yields:\n";
  a -= b;
  a.printPolynomial();
  cout << endl;
  return 0;
}
