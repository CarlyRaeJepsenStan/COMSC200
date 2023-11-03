#include "Aaron_Shey_Polynomial.h"
#include <iostream>
#include <vector>
using namespace std;
#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H

Polynomial::Polynomial() { vector<int> internal(5, 0); };
int Polynomial::operator[](int in) { return internal[in]; };

// replace all the unused exponent locations with 0 along with implement adding
// so you can enter the same exponent twice
void Polynomial::enterTerms() {
  int degree = 0, i = 0;
  cout << "Enter number of polynomial terms: ";
  cin >> degree;
  int prev = 0;

  while (i <= degree) {
    int exponent = 0;
    cout << "Enter exponent: ";
    cin >> exponent;
    // this line fills all the space between each exponent with 0s
    for (int prev; prev < exponent; prev++) {
      internal[i] = 0;
    }
    prev = exponent;
    cout << "Enter coefficient: ";
    cin >> internal[exponent];
    i++;
  }
}

Polynomial Polynomial::operator+=(const Polynomial &n) {
  for (int i = 0; i < 5; i++) {
    internal[i] = internal[i] + n.internal[i];
  }
  return *this;
}

Polynomial Polynomial::operator+(const Polynomial &n) { return *this += n; }

Polynomial Polynomial::operator-=(const Polynomial &n) {
  for (int i = 0; i < 5; i++) {
    internal[i] = internal[i] - n.internal[i];
  }
  return *this;
}
Polynomial Polynomial::operator=(const Polynomial &n) { return *this; }

void Polynomial::printPolynomial() {
  for (int i = 0; i < internal.size(); i++) {
    if (internal[i] != 0) {
      cout << internal[i] << "x^" << i;
      if (i != internal.size() - 1)
        cout << " + ";
    }
  }
  cout << "\n";
}
#endif