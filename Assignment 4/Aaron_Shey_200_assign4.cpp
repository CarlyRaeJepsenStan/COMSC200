#include "Aaron_Shey_HeartRates.h"
#include <iostream>
#include <vector>
using namespace std;

int main() {
  cout << "Enter your name and age, separated by a space."
       << "\n";
  string input;
  getline(cin, input);
  int index = input.find(' ');
  string first = input.substr(0, index);
  string last = input.substr(index + 1, input.length() - index);

  cout << "Enter the date in Month Day Year format, separated by spaces: "
       << "\n";
  string input2;
  getline(cin, input2);
  vector<int> date;
  for (char x : input2) {
  }
}
