#include "Aaron_Shey_HeartRates.h"
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;
vector<string> split(string &input);
vector<int> splitInt(string &input);
int main() {
  cout << "Please enter first and last name, (separated by spaces): "
       << "\n";
  string input;
  getline(cin, input);
  vector<string> name = split(input);

  cout << "Please enter month, day, and year of birth (separated by spaces): "
       << "\n";
  string input2;
  getline(cin, input2);
  vector<int> birthDate = splitInt(input2);
  HeartRate user =
      HeartRate(birthDate[0], birthDate[1], birthDate[2], name[0], name[1]);

  cout << "First name: " << user.getFirstName() << "\n"
       << "Last name: " << user.getLastName() << "\n"
       << "Date of birth: " << user.getBirthDateFull() << "\n"
       << "Please enter today's month, day, and year: "
       << "\n";
  string input3;
  getline(cin, input3);
  vector<int> today = splitInt(input3);
  int age = user.getAge(today);

  int maxHeartRate = user.getMaximumHeartRate(age);
  vector<double> hrRange = user.getTargetHeartRate(maxHeartRate);

  cout << "Age: " << age << "\n"
       << "Maximum Heart Rate: " << maxHeartRate << "\n"
       << "Target Heart Rate: " << hrRange[1] << "-" << hrRange[0] << "\n";
}
vector<string> split(string &input) {
  vector<string> output;
  istringstream iss(input);
  string el;
  while (getline(iss, el, ' ')) {
    output.push_back(el);
  }
  return output;
}

vector<int> splitInt(string &input) {
  vector<int> output;
  istringstream iss(input);
  string el;
  while (getline(iss, el, ' ')) {
    output.push_back(stoi(el));
  }
  return output;
}
