#include "Aaron_Shey_RationalNumber.h"
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

// 9.  I used the C++ 17 `gcd` function to find the greatest common divisor of
// the numerator and denominator, then use that value to simplify them.
RationalNumber RationalNumber::reduce() {
  int g = gcd(numerator, denominator);
  if (g != 0) {
    numerator = numerator / g;
    denominator = denominator / g;
  }
  return *this;
}

RationalNumber::RationalNumber() : numerator(0), denominator(1){};
RationalNumber::RationalNumber(int n, int d) : numerator(n), denominator(d) {
  // 10.  Within this constructor, I made sure to reduce the rational number so
  // the output looks a little cleaner.
  *this = this->reduce();
};

RationalNumber RationalNumber::operator=(const RationalNumber &rhs) {
  // 11.  This assignment operator gave me a lot of trouble, but I finally
  // learned that I HAD to use the this pointer to make it work correctly
  numerator = rhs.numerator;
  denominator = rhs.denominator;
  return *this;
};

RationalNumber RationalNumber::operator+=(const RationalNumber &rhs) {
  // 12.  Most of the compound assignment operators look like this.  I change
  // the value of this->numerator and this->denominator with the appropiate
  // arithmetic, then return the reduced value of this.
  numerator = numerator * rhs.denominator + denominator * rhs.numerator;
  denominator = denominator * rhs.denominator;
  return this->reduce();
};

RationalNumber operator+(RationalNumber &rhs, const RationalNumber &lhs) {
  // 13.  Most of the binary operators look like this, too.  To retain the
  // original values of the operands, I create a copy of the left hand side,
  // then use the compound assignment operator to change the values of the copy.
  // I then return the reduced value of the copy.
  RationalNumber temp = rhs;
  temp += lhs;
  return temp.reduce();
};

RationalNumber RationalNumber::operator-=(const RationalNumber &rhs) {
  numerator = numerator * rhs.denominator - denominator * rhs.numerator;
  denominator = denominator * rhs.denominator;
  return this->reduce();
};

RationalNumber operator-(RationalNumber &rhs, const RationalNumber &lhs) {
  RationalNumber temp = rhs;
  temp -= lhs;
  return temp.reduce();
};

RationalNumber RationalNumber::operator*=(const RationalNumber &rhs) {
  numerator = numerator * rhs.numerator;
  denominator = denominator * rhs.denominator;
  return this->reduce();
};

RationalNumber operator*(RationalNumber &rhs, const RationalNumber &lhs) {
  RationalNumber temp = rhs;
  temp *= lhs;
  return temp.reduce();
};

RationalNumber RationalNumber::operator/=(const RationalNumber &rhs) {
  numerator = numerator * rhs.denominator;
  denominator = denominator * rhs.numerator;
  return this->reduce();
};

RationalNumber operator/(RationalNumber &rhs, const RationalNumber &lhs) {
  RationalNumber temp = rhs;
  temp /= lhs;
  return temp.reduce();
};

bool RationalNumber::operator<(const RationalNumber &rhs) {
  // 14.  I use the cross product to compare the two rational numbers.  I
  // actually had to look up how to most concisely compare two rational numbers,
  // so this was a cool refresher on basic fraction math.  Again, most of the
  // operators below are pretty similar, just with different symbols.
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
  // 15.  These two functions don't need any reducing, because I made sure to
  // reduce the rational number in its constructor.  Thus, these functions can
  // be really nice and short.
  return numerator == rhs.numerator && denominator == rhs.denominator;
}

bool RationalNumber::operator!=(const RationalNumber &rhs) {
  return numerator != rhs.numerator || denominator != rhs.denominator;
}

void RationalNumber::printRational() {
  // 16.  This function wasn't hard at all, but I thought it was pretty cool.
  if (denominator == 1) {
    cout << numerator;
  } else {
    cout << numerator << "/" << denominator;
  }
}