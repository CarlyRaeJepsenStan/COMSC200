#ifndef ACCOUNT_H
#define ACCOUNT_H
class Account {
private:
  double balance;

public:
  Account();
  Account(double);
  virtual void credit(double);
  virtual void debit(double);
  double getBalance();
};
#endif