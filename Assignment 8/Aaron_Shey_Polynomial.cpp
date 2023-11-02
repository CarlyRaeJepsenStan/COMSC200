#include "Aaron_Shey_Polynomial.h"
#include <iostream>
#include <vector>
using namespace std;
#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H

Polynomial::Polynomial() { vector<int> internal(5, 0); };
int Polynomial::operator[](int in) { return internal[in]; }
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
    for (int prev; prev < exponent; prev++) {
      internal[i] = 0;
    }
    prev = exponent;
    cout << "Enter coefficient: ";
    cin >> internal[exponent];
    i++;
  }
}

Polynomial Polynomial::operator+(const Polynomial n) {
  Polynomial temp;
  for (int i = 0; i < 5; i++) {
    temp[i] = internal[i];
  }
  return temp;
}

void Polynomial::printPolynomial() {
  for (int i = 0; i < internal.size(); i++) {
    if (internal[i] != 0) {
      cout << internal[i] << "x^" << i << " + ";
    }
  }
  cout << "\n";
}
#endif