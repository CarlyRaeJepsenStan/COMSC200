#include "Aaron_Shey_RationalNumber.h"
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

RationalNumber RationalNumber::reduce(const RationalNumber &rhs) {
  int g = gcd(rhs.numerator, rhs.denominator);
  if (g != 0) {
    numerator = rhs.numerator / g;
    denominator = rhs.denominator / g;
  }
  return *this;
}

RationalNumber::RationalNumber() : numerator(1), denominator(1){};
RationalNumber::RationalNumber(int n, int d) : numerator(n), denominator(d){};

RationalNumber RationalNumber::operator+=(const RationalNumber &rhs) {
  numerator = numerator * rhs.denominator + denominator * rhs.numerator;
  denominator = denominator * rhs.denominator;
  vector<int> temp = reduce(numerator, denominator);
  numerator = temp[0];
  denominator = temp[1];
  return *this;
};

RationalNumber RationalNumber::operator+(const RationalNumber &rhs) {
  RationalNumber temp = *this;
  temp += rhs;
  return temp;
};

RationalNumber RationalNumber::operator-=(const RationalNumber &rhs) {
  numerator = numerator * rhs.denominator - denominator * rhs.numerator;
  denominator = denominator * rhs.denominator;
  return *this;
};

RationalNumber RationalNumber::operator-(const RationalNumber &rhs) {
  RationalNumber temp = *this;
  temp -= rhs;
  return temp;
};

RationalNumber RationalNumber::operator=(const RationalNumber &rhs) {
  numerator = rhs.numerator;
  denominator = rhs.denominator;
  return *this;
};

RationalNumber RationalNumber::operator*=(const RationalNumber &rhs) {
  numerator = numerator * rhs.numerator;
  denominator = denominator * rhs.denominator;
  return *this;
};

RationalNumber RationalNumber::operator*(const RationalNumber &rhs) {
  RationalNumber temp = *this;
  temp *= rhs;
  return temp;
};

RationalNumber RationalNumber::operator/=(const RationalNumber &rhs) {
  numerator = numerator * rhs.denominator;
  denominator = denominator * rhs.numerator;
  return *this;
};

RationalNumber RationalNumber::operator/(const RationalNumber &rhs) {
  RationalNumber temp = *this;
  temp /= rhs;
  return temp;
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
  cout << numerator << "/" << denominator << "\n";
}