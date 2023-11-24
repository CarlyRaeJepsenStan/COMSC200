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
  const double getBalance();

  // Assignment 11 code:
  Account operator=(const Account &);
  friend std::ostream &operator<<(std::ostream &, Account &);
  friend Account operator+(const Account &, double);
  friend Account operator+(double, const Account &);
  friend Account operator-(const Account &, double);

  Account operator+=(const Account &);
  Account operator-=(const Account &);
};
#endif