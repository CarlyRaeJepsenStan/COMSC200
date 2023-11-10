#include "Aaron_Shey_RationalNumber.h"
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

RationalNumber RationalNumber::reduce() {
  int g = gcd(numerator, denominator);
  if (g != 0) {
    numerator = numerator / g;
    denominator = denominator / g;
  }
  return *this;
}

RationalNumber::RationalNumber() : numerator(1), denominator(1){};
RationalNumber::RationalNumber(int n, int d) : numerator(n), denominator(d){};

RationalNumber RationalNumber::operator+=(const RationalNumber &rhs) {
  RationalNumber temp;
  temp.numerator = numerator * rhs.denominator + denominator * rhs.numerator;
  temp.denominator = denominator * rhs.denominator;
  return temp.reduce();
};

RationalNumber operator+(RationalNumber &rhs, const RationalNumber &lhs) {
  rhs += lhs;
  return rhs.reduce();
};

RationalNumber RationalNumber::operator-=(const RationalNumber &rhs) {
  RationalNumber temp;
  temp.numerator = numerator * rhs.denominator - denominator * rhs.numerator;
  temp.denominator = denominator * rhs.denominator;
  return temp.reduce();
};

RationalNumber RationalNumber::operator-(const RationalNumber &rhs) {
  RationalNumber temp = *this;
  temp -= rhs;
  return temp.reduce();

  RationalNumber RationalNumber::operator=(const RationalNumber &rhs) {
    RationalNumber temp;
    temp.numerator = rhs.numerator;
    temp.denominator = rhs.denominator;
    return reduce(temp);
  };

  RationalNumber RationalNumber::operator*=(const RationalNumber &rhs) {
    RationalNumber temp;
    temp.numerator = numerator * rhs.numerator;
    temp.denominator = denominator * rhs.denominator;
    return reduce(temp);
  };

  RationalNumber RationalNumber::operator*(const RationalNumber &rhs) {
    RationalNumber temp = *this;
    temp *= rhs;
    return reduce(temp);
  };

  RationalNumber RationalNumber::operator/=(const RationalNumber &rhs) {
    RationalNumber temp;
    temp.numerator = numerator * rhs.denominator;
    temp.denominator = denominator * rhs.numerator;
    return reduce(temp);
  };

  RationalNumber RationalNumber::operator/(const RationalNumber &rhs) {
    RationalNumber temp = *this;
    temp /= rhs;
    return reduce(temp);
  };

  bool RationalNumber::operator<(const RationalNumber &rhs) {
    return numerator * rhs.denominator < denominator * rhs.numerator;
  }

  bool RationalNumber::operator>(const RationalNumber &rhs) {
    return numerator * rhs.denominator > denominator * rhs.numerator;
  }

  bool RationalNumber::operator<=(const RationalNumber &rhs) {
    return numerator * rhs.denominator <= denominator * rhs.numerator;
  }

  bool RationalNumber::operator>=(const RationalNumber &rhs) {
    return numerator * rhs.denominator >= denominator * rhs.numerator;
  }

  bool RationalNumber::operator==(const RationalNumber &rhs) {
    return numerator == rhs.numerator && denominator == rhs.denominator;
  }

  bool RationalNumber::operator!=(const RationalNumber &rhs) {
    return numerator != rhs.numerator || denominator != rhs.denominator;
  }

  void RationalNumber::printRational() {
    cout << numerator << "/" << denominator;
  }