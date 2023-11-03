#include "Aaron_Shey_Polynomial.h"
#include <iostream>
#include <vector>
using namespace std;
#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H

// 1.  I started out by automatically setting the size of the vector to 5 and
// filling it with 0's.
Polynomial::Polynomial() { vector<int> internal(5, 0); };
// 2.  I also overloaded the subscript operator to return the value at the index
// of the vector.
int Polynomial::operator[](int in) { return internal[in]; };

// 3.  This was the first function that I found fairly complicated to write.  I
// wanted this function to cover several different edge cases:
//*. If the user enters an exponent greater than 5, the vector automatically
// resizes to the size of the exponent.
//**. If the user then enters an exponent less than the size of the exponent,
// the vector does NOT resize, retaining the original size.
//***.  Finally, if the user enters an exponent twice, the value is added,
// allowing for the user to enter the same exponent multiple times.
void Polynomial::enterTerms() {
  int now = 0, loc = 0, input = 0, numberOfTerms = 0;
  cout << "Enter the number of polynomial terms: ";
  cin >> numberOfTerms;
  for (int i = 0; i < numberOfTerms; i++) {
    cout << "\nEnter a location: ";
    cin >> loc;
    // 4.  This is a sentinel value that allows the user to exit the loop.
    if (loc == -1) {
      break;
    }
    cout << "\nEnter a number: ";
    cin >> input;
    // 5.  This logic is pretty interesting: if the user enters an exponent that
    // is larger than the size of the vector, the vector is resized to the size
    // of the exponent.  However, I had to resize it to loc + 1, because vectors
    // are 0-indexed.
    if (loc >= internal.size()) {
      internal.resize(loc + 1, 0);
    }
    // 6.  Finally, the increment, as processed.
    internal[loc] += input;
  }
}

// 7.  This is function was extremely complicated to theorize, write, and debug.
// I had to consider what would happen if the two vectors were differently
// sized; this often resulted in the result being filled with garbage numbers.
Polynomial Polynomial::operator+=(const Polynomial &n) {
  // 8.  This was the first part of my solution: I used the built-in min and max
  // functions to determine the relative size of the vectors.
  int minSize = min(internal.size(), n.internal.size());
  int maxSize = max(internal.size(), n.internal.size());
  // 9.  Next, I looped up to the size of the smaller vector, adding them
  // together, ensuring that the result didn't have any garbage values.
  for (int i = 0; i < minSize; i++) {
    internal[i] += n.internal[i];
  }
  // 10.  Finally, I checked to see if the right hand side was larger than the
  // left.  If this was so, then I was at risk of adding garbage values to the
  // result.  To prevent this, I simply pushed the remaining values to the end
  // of result.
  if (n.internal.size() > internal.size()) {
    for (int i = minSize; i < maxSize; i++) {
      internal.push_back(n.internal[i]);
    }
  }

  return *this;
}
// 11. Then for the + operator, I just returned the this pointer with the +=
// operator applied to it.
Polynomial Polynomial::operator+(const Polynomial &n) { return *this += n; }

// 12.  For the subtraction operators, I pretty much just copied the code from
// the addition operators, but used subtraction and negatives instead of
// addition.
Polynomial Polynomial::operator-=(const Polynomial &n) {
  int minSize = std::min(internal.size(), n.internal.size());
  int maxSize = std::max(internal.size(), n.internal.size());

  for (int i = 0; i < minSize; i++) {
    internal[i] -= n.internal[i];
  }

  if (n.internal.size() > internal.size()) {
    for (int i = minSize; i < maxSize; i++) {
      internal.push_back(-n.internal[i]);
    }
  }

  return *this;
}
Polynomial Polynomial::operator-(const Polynomial &n) { return *this -= n; }

Polynomial Polynomial::operator=(const Polynomial &n) {
  if (this != &n) {
    internal = n.internal;
  }
  return *this;
}

void Polynomial::printPolynomial() {
  for (int i = 0; i < internal.size(); i++) {
    if (internal[i] != 0) {
      cout << internal[i] << "x^" << i;
      // 13.  This was a small yet useful line of code.  It simply checks to see
      // if the current value is the last value in the vector.  If it is, then
      // it doesn't print a plus sign.
      if (i != internal.size() - 1)
        cout << " + ";
    }
  }
  cout << "\n";
}
#endif