#include "Aaron_Shey_Account.h"         // Account class definition
#include "Aaron_Shey_CheckingAccount.h" // CheckingAccount class definition
#include "Aaron_Shey_SavingsAccount.h"  // SavingsAccount class definition
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  Account account1(5.0);              // create Account object
  SavingsAccount account2(5.0, .0);   // create SavingsAccount object
  CheckingAccount account3(5.0, 1.0); // create CheckingAccount object

  cout << fixed << setprecision(2);

  cout << "account1 balance: $" << account1 << endl;
  cout << "account3 balance: $" << account3 << endl;
  cout << "account2 balance: $" << account2 << endl;

  double debit1 = 3.0, debit2 = 3.0, debit3 = 3.0;

  cout << "\nAttempting to debit " << debit1 << " from account1." << endl;
  account1 -= debit1;
  cout << "\nAttempting to debit " << debit2 << " from account2." << endl;
  account2 -= debit2;
  cout << "\nAttempting to debit " << debit3 << " from account3." << endl;
  account3 -= debit3;

  cout << "\naccount1 balance: $" << account1 << endl;
  cout << "account2 balance: $" << account2 << endl;
  cout << "account3 balance: $" << account3 << endl;

  double credit1 = 3.0, credit2 = 3.0, credit3 = 3.0;
  cout << "\nCrediting " << credit1 << " to account1." << endl;
  // 8. Demonstrate the compound addition operator.
  account1 += credit1 / 3.0;
  // 9.  Demonstrate the addition operator with a double on the right hand and
  // an account on the left hand.
  account1 = credit1 / 3.0 + account1;
  // 10.  Demonstrate the addition operator, but with a double on the left hand
  // and a account on the right hand.
  account1 = account1 + credit1 / 3.0;
  cout << "\nCrediting " << credit2 << " to account2." << endl;
  // 11.  Show off this operator for the rest of the account types.
  account2 += credit2 / 3.0;
  account2 = credit2 / 3.0 + account2;
  account2 = account2 + credit2 / 3.0;
  cout << "\nCrediting " << credit3 << " to account3." << endl;
  account3 += credit3 / 3.0;
  account3 = credit3 / 3.0 + account3;
  account3 = account3 + credit3 / 3.0;

  cout << "\naccount1 balance: $" << account1 << endl;
  cout << "account2 balance: $" << account2.getBalance() << endl;
  cout << "account3 balance: $" << account3.getBalance() << endl;

  double interestEarned = account2.calculateInterest();
  cout << "\nAdding $" << interestEarned << " interest to account2." << endl;
  account2.credit(interestEarned);

  cout << "\nNew account2 balance: $" << account2.getBalance() << endl;

  return 0;
}
