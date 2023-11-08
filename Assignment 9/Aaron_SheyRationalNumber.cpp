#include "Aaron_Shey_RationalNumber.h"
#include <iostream>
using namespace std;

RationalNumber::RationalNumber() : numerator(1), denominator(1){};

void RationalNumber::printRational() {
  cout << "( " << numerator << " / " << denominator << "\n";
}