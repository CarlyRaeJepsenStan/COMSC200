#include "Aaron_Shey_Account.h"
#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H
class CheckingAccount : public Account {
private:
  double fee;

public:
  CheckingAccount();
  CheckingAccount(double, double);
  void credit(double);
  void debit(double);
  double getFee();
  void setFee(double);
  // Assignment 11 code:
  CheckingAccount operator=(const CheckingAccount &);
  friend std::ostream &operator<<(std::ostream &, CheckingAccount &);
  friend CheckingAccount operator+(CheckingAccount &, double);
  friend CheckingAccount operator+(double, const CheckingAccount &);
  friend CheckingAccount operator-(CheckingAccount &, double);

  CheckingAccount operator+=(double);
  CheckingAccount operator-=(double);
};
#endif