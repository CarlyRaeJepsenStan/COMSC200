#include "Aaron_Shey_Account.h"
#include <iostream>
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
double Account::getBalance() { return balance; }