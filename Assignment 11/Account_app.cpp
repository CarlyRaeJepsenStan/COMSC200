#include "Aaron_Shey_Account.h"         // Account class definition
#include "Aaron_Shey_CheckingAccount.h" // CheckingAccount class definition
#include "Aaron_Shey_SavingsAccount.h"  // SavingsAccount class definition
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  Account account1(6000.0);
  SavingsAccount account2(500.0, .0);
  CheckingAccount account3(5.0, 1.0);
  cout << fixed << setprecision(2);
  cout << "account1 balance: $" << account1 << "\n"
       << "account3 balance: $" << account3 << "\n"
       << "account2 balance: $" << account2 << "\n";

  double debit1 = 3000.0, debit2 = 3.0, debit3 = 3.0;
  cout << "\nAttempting to debit " << debit1 << " from account1." << endl;
  account1 -= debit1;
  cout << "\nAttempting to debit " << debit2 << " from account2." << endl;
  account2 -= debit2;
  cout << "\nAttempting to debit " << debit3 << " from account3." << endl;
  account3 -= debit3;
  cout << "account1 balance: $" << account1 << "\n"
       << "account3 balance: $" << account3 << "\n"
       << "account2 balance: $" << account2 << "\n";
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
  cout << "account1 balance: $" << account1 << "\n"
       << "account3 balance: $" << account3 << "\n"
       << "account2 balance: $" << account2 << "\n";

  double interestEarned = account2.calculateInterest();
  cout << "\nAdding $" << interestEarned << " interest to account2." << endl;
  account2.credit(interestEarned);

  cout << "\nNew account2 balance: $" << account2.getBalance() << endl;

  return 0;
}
