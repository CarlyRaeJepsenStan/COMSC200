#include "Aaron_Shey_Array.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
  // 8.  Initialize the arrays with the size of 5, with different types to
  // demonstrate the template.
  Array<int> i(5);
  Array<string> s(5);
  // 9.  Prompt the user for input, then stream it into the arrays.
  cout << "Enter 5 integer values: ";
  cin >> i;
  // 10.  I added to returns to this line, for readability.
  cout << "\nThe values in the integer Array are: \n" << i << "\n\n";
  cout << "Enter 5 string values: ";
  cin >> s;
  cout << "\nThe values in the string Array are: \n" << s << "\n\n";
  // 11.  Done!
}
