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