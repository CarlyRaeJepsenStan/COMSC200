#include "Aaron_Shey_SavingsAccount.h"
using namespace std;

SavingsAccount::SavingsAccount() { interestRate = 0.0; }

SavingsAccount::SavingsAccount(double b, double i) : Account(b) {
  this->interestRate = i;
}

double SavingsAccount::calculateInterest() {
  return getBalance() * interestRate;
}

double SavingsAccount::getInterestRate() { return interestRate; }