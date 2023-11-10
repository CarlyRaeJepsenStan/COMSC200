class RationalNumber {
private:
  int numerator, denominator;

public:
  RationalNumber();
  RationalNumber(int, int);

  RationalNumber reduce();

  RationalNumber operator+=(const RationalNumber &);
  RationalNumber operator-=(const RationalNumber &);
  RationalNumber operator=(const RationalNumber &);

  friend RationalNumber operator+(RationalNumber &, const RationalNumber &);
  friend RationalNumber operator-(RationalNumber &, const RationalNumber &);
  friend RationalNumber operator*(RationalNumber &, const RationalNumber &);
  friend RationalNumber operator/(RationalNumber &, const RationalNumber &);

  RationalNumber operator*=(const RationalNumber &);
  RationalNumber operator*(const RationalNumber &);
  RationalNumber operator/=(const RationalNumber &);
  RationalNumber operator/(const RationalNumber &);

  bool operator>(const RationalNumber &);
  bool operator<(const RationalNumber &);
  bool operator>=(const RationalNumber &);
  bool operator<=(const RationalNumber &);

  bool operator==(const RationalNumber &);
  bool operator!=(const RationalNumber &);

  void printRational();
};
