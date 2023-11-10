class RationalNumber {
private:
  int numerator, denominator;

public:
  RationalNumber();
  RationalNumber(int, int);

  RationalNumber reduce(const RationalNumber &);

  RationalNumber operator+=(const RationalNumber &);
  RationalNumber operator+(const RationalNumber &);
  RationalNumber operator-=(const RationalNumber &);
  RationalNumber operator-(const RationalNumber &);
  RationalNumber operator=(const RationalNumber &);

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
