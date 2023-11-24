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

// Assignment 11 code:

SavingsAccount SavingsAccount::operator=(const SavingsAccount &a) {
  interestRate = a.getInterestRate();
  this->setBalance(a.getBalance());
  return *this;
}

std::ostream &operator<<(std::ostream &os, SavingsAccount &a) {
  os << a.getBalance() << endl;
  return os;
}

SavingsAccount operator+()