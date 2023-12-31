#include "Aaron_Shey_HeartRates.h"
#include <cstdlib>
#include <string>
#include <vector>
using namespace std;
HeartRate::HeartRate(int month, int day, int year, string a, string b) {
  birthMonth = month;
  birthDay = day;
  birthYear = year;
  firstName = a;
  lastName = b;
}
void HeartRate::setFirstName(string in) { firstName = in; }

string HeartRate::getFirstName() const { return firstName; }

void HeartRate::setLastName(string in) { lastName = in; }

string HeartRate::getLastName() const { return lastName; }

void HeartRate::setBirthDay(int day) { birthDay = day; }

int HeartRate::getBirthDay() const { return birthDay; }

void HeartRate::setBirthMonth(int month) { birthMonth = month; }

int HeartRate::getBirthMonth() const { return birthMonth; }

void HeartRate::setBirthYear(int year) { birthYear = year; }

int HeartRate::getBirthYear() const { return birthYear; }

string HeartRate::getBirthDateFull() {
  return to_string(birthMonth) + "/" + to_string(birthDay) + "/" +
         to_string(birthYear);
}

int HeartRate::getAge(vector<int> today) {
  int age = 0;
  // 5. if the month and day are greater than the birthday, the user is as old
  // as this year minus their birth year
  if (today[0] >= birthDay && today[1] >= birthMonth) {
    age = today[2] - birthYear;
  } else {
    // 6.  Otherwise, their age is this year minus their birth year, and then
    // minus 1.
    age = (today[2] - birthYear) - 1;
  }
  return age;
}

int HeartRate::getMaximumHeartRate(int age) { return 220 - age; }

vector<double> HeartRate::getTargetHeartRate(int maxHR) {
  vector<double> result = {maxHR * 0.85, maxHR * 0.5};
  return result;
}
