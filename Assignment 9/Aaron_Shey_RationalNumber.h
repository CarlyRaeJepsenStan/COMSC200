class RationalNumber {
private:
  // 1.  I decided against using lists like arrays or vectors, because they
  // would make my code "ugly" and difficult to read due to their subscript
  // operators.
  int numerator, denominator;

public:
  // 2.  Here are the constructors.
  RationalNumber();
  RationalNumber(int, int);
  // 3.  I added the reduce helper function to make my code more concise and
  // readable.
  RationalNumber reduce();

  // 4.  I organized all the compound assignment operators in one place.
  RationalNumber operator+=(const RationalNumber &);
  RationalNumber operator-=(const RationalNumber &);
  RationalNumber operator*=(const RationalNumber &);
  RationalNumber operator/=(const RationalNumber &);

  // 5.  I organized all the friend arithmetic operators in one place, too.
  friend RationalNumber operator+(RationalNumber &, const RationalNumber &);
  friend RationalNumber operator-(RationalNumber &, const RationalNumber &);
  friend RationalNumber operator*(RationalNumber &, const RationalNumber &);
  friend RationalNumber operator/(RationalNumber &, const RationalNumber &);

  // 7.  This operator didn't really fit above, so I put it in its own place.
  RationalNumber operator=(const RationalNumber &);

  // 8.  Finally, I put all the bool operators in one place, along with the
  // print function.
  bool operator>(const RationalNumber &);
  bool operator<(const RationalNumber &);
  bool operator>=(const RationalNumber &);
  bool operator<=(const RationalNumber &);

  bool operator==(const RationalNumber &);
  bool operator!=(const RationalNumber &);

  void printRational();
};
