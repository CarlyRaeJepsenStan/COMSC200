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
  double getInterestRate() const;

  // Assignment 11 code:
  SavingsAccount operator=(const SavingsAccount &);
  friend std::ostream &operator<<(std::ostream &, SavingsAccount &);
  friend SavingsAccount operator+(SavingsAccount &, double);
  friend SavingsAccount operator+(double, SavingsAccount &);
  friend SavingsAccount operator-(SavingsAccount &, double);

  SavingsAccount operator+=(double);
  SavingsAccount operator-=(double);
};
#endif