#include "Aaron_Shey_SavingsAccount.h"
using namespace std;

SavingsAccount::SavingsAccount() { interestRate = 0.0; }

SavingsAccount::SavingsAccount(double b, double i) : Account(b) {
  this->interestRate = i;
}

double SavingsAccount::calculateInterest() {
  return getBalance() * interestRate;
}

double SavingsAccount::getInterestRate() const { return interestRate; }

// Assignment 11 code:
// 7.  Again, here the code is pretty much the same as the two previous files.
SavingsAccount SavingsAccount::operator=(const SavingsAccount &a) {
  interestRate = a.getInterestRate();
  this->setBalance(a.getBalance());
  return *this;
}

std::ostream &operator<<(std::ostream &os, SavingsAccount &a) {
  os << a.getBalance() << endl;
  return os;
}

SavingsAccount operator+(SavingsAccount &a, double b) {
  SavingsAccount c;
  c.setBalance(a.getBalance() + b);
  c.interestRate = a.getInterestRate();
  return c;
}

SavingsAccount operator+(double b, SavingsAccount &a) {
  SavingsAccount c;
  c.setBalance(a.getBalance() + b);
  c.interestRate = a.getInterestRate();
  return c;
}

SavingsAccount operator-(SavingsAccount &a, double b) {
  SavingsAccount c;
  c.setBalance(a.getBalance() - b);
  c.interestRate = a.getInterestRate();
  return c;
}

SavingsAccount SavingsAccount::operator+=(double a) {
  this->setBalance(this->getBalance() + a);
  return *this;
}

SavingsAccount SavingsAccount::operator-=(double a) {
  this->setBalance(this->getBalance() - a);
  return *this;
}