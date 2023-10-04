#include "Aaron_Shey_HeartRates.h"
using namespace std;
HeartRate::HeartRate(int month, int day, int year) {
  birthMonth = month;
  birthDay = day;
  birthYear = year;
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
