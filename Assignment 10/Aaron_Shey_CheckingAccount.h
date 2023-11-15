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
};
#endif