#include "Aaron_Shey_RationalNumber.h"
#include <iostream>
using namespace std;

RationalNumber::RationalNumber() : numerator(1), denominator(1){};
RationalNumber::RationalNumber(int num, int den)
    : numerator(num), denominator(den){};

RationalNumber RationalNumber::operator+=(const RationalNumber &rhs) {
  numerator = numerator * rhs.denominator + denominator * rhs.numerator;
  denominator = denominator * rhs.denominator;
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

RationalNumber RationalNumber::operator>(const RationalNumber &rhs) {
  return (numerator * rhs.denominator > denominator * rhs.numerator);
};

RationalNumber RationalNumber::operator<(const RationalNumber &rhs) {
  return (numerator * rhs.denominator < denominator * rhs.numerator);
};

void RationalNumber::printRational() {
  cout << numerator << "/" << denominator << "\n";
}