#include <ostream>
#ifndef ACCOUNT_H
#define ACCOUNT_H
class Account {
private:
  double balance;

public:
  Account();
  Account(double);
  virtual void credit(double);
  virtual void debit(double);
  double getBalance() const;
  // 1. To resolve the problem described in this week's instructions, I added
  // this setter function.  It was simple and worked quite well!
  void setBalance(double);

  // Assignment 11 code:
  // 2.  Here are all the assignment 11 operators.  These operators must be
  // friends, so they were written as such.
  Account operator=(const Account &);
  friend std::ostream &operator<<(std::ostream &, Account &);
  friend Account operator+(const Account &, double);
  friend Account operator+(double, const Account &);
  friend Account operator-(const Account &, double);

  // 3.  Because these operators are not friends, I put them separately.
  Account operator+=(double);
  Account operator-=(double);
};
#endif