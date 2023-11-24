#include "Aaron_Shey_Account.h"
#include <iostream>
#include <ostream>
using namespace std;
Account::Account() : balance(0.0){};
Account::Account(double i) : balance(i) {
  if (balance < 0) {
    cout << "Error: Balance cannot be negative. Setting balance to 0.\n";
    balance = 0.0;
  }
};
void Account::credit(double i) { balance += i; }
void Account::debit(double i) {
  if (i > balance) {
    cout << "Error: Debit amount exceeded account balance.\n";
  } else
    balance -= i;
}
const double Account::getBalance() { return balance; }

void Account::setBalance(double i) { balance = i; }
// Assignment 11 code:

Account Account::operator=(const Account &a) {
  balance = a.balance;
  return *this;
}

std::ostream &operator<<(std::ostream &os, Account &a) {
  os << a.getBalance() << endl;
  return os;
}

Account operator+(const Account &a, double b) {
  Account c;
  c.balance = a.balance + b;
  return c;
}

Account operator+(double a, const Account &b) {
  Account c;
  c.balance = a + b.balance;
  return c;
}

Account operator-(const Account &a, double b) {
  Account c;
  c.balance = a.balance - b;
  return c;
}

Account Account::operator+=(double a) {
  balance += a;
  return *this;
}

Account Account::operator-=(double a) {
  balance -= a;
  return *this;
}