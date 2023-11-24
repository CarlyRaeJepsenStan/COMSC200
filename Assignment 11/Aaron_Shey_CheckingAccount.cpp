#include "Aaron_Shey_CheckingAccount.h"
#include <iostream>
using namespace std;
CheckingAccount::CheckingAccount() { fee = 0.0; }
CheckingAccount::CheckingAccount(double b, double f) : Account(b) {
  this->fee = f;
}
void CheckingAccount::credit(double i) {
  Account::credit(i);
  Account::debit(fee);
  cout << "$" << fee << " transaction fee charged."
       << "\n";
}

void CheckingAccount::debit(double i) {
  Account::debit(i);
  Account::debit(fee);
  cout << "$" << fee << " transaction fee charged."
       << "\n";
}

double CheckingAccount::getFee() { return fee; }

void CheckingAccount::setFee(double f) { this->fee = f; }

// Assignment 11 code:
CheckingAccount CheckingAccount::operator=(CheckingAccount &a) {
  fee = a.fee;
  this->setBalance(a.getBalance());
  return *this;
}

std::ostream &operator<<(std::ostream &os, CheckingAccount &a) {
  os << a.getBalance() << endl;
  return os;
}

CheckingAccount operator+(CheckingAccount &a, double b) {
  CheckingAccount c;
  c.setFee(a.getFee());
  c.setBalance(a.getBalance() + b);
  return c;
}

CheckingAccount operator+(double a, CheckingAccount &b) {
  CheckingAccount c;
  c.setFee(b.getFee());
  c.setBalance(b.getBalance() + a);
  return c;
}

CheckingAccount operator-(CheckingAccount &a, double b) {
  CheckingAccount c;
  c.setFee(a.getFee());
  c.setBalance(a.getBalance() - b);
  return c;
}

CheckingAccount CheckingAccount::operator+=(double a) {
  this->setBalance(this->getBalance() + a);
  return *this;
}

CheckingAccount CheckingAccount::operator-=(double a) {
  this->setBalance(this->getBalance() - a);
  return *this;
}
