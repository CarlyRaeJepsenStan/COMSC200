class RationalNumber {
private:
  int numerator, denominator;

public:
  RationalNumber();
  RationalNumber(int, int);
  RationalNumber operator+=(const RationalNumber &);
  RationalNumber operator+(const RationalNumber &);
  RationalNumber operator-=(const RationalNumber &);
  RationalNumber operator-(const RationalNumber &);
  RationalNumber operator=(const RationalNumber &);

  RationalNumber operator*=(const RationalNumber &);
  RationalNumber operator*(const RationalNumber &);
  RationalNumber operator/=(const RationalNumber &);
  RationalNumber operator/(const RationalNumber &);

  RationalNumber operator>(const RationalNumber &);
  RationalNumber operator<(const RationalNumber &);
  RationalNumber operator>=(const RationalNumber &);
  RationalNumber operator<=(const RationalNumber &);

  RationalNumber operator==(const RationalNumber &);
  RationalNumber operator!=(const RationalNumber &);

  void printRational();
};
