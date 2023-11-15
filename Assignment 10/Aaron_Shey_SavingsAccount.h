#include "Aaron_Shey_Account.h"

#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H
class SavingsAccount : public Account {
private:
  double interestRate;

public:
  SavingsAccount();
  SavingsAccount(double, double);
  double calculateInterest();
  double getInterestRate();
};
#endif