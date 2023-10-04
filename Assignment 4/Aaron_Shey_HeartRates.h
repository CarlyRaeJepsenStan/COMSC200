#include "string"
using namespace std;
#ifndef HEARTRATE_H
#define HEARTRATE_H

#include <string>

class HeartRate {
private:
  string firstName, lastName;
  int birthDay, birthMonth, birthYear;

public:
  HeartRate(int, int, int);
  void setFirstName(string in);
  string getFirstName() const;

  void setLastName(string in);
  string getLastName() const;

  void setBirthDay(int day);
  int getBirthDay() const;

  void setBirthMonth(int month);
  int getBirthMonth() const;

  void setBirthYear(int year);
  int getBirthYear() const;
};

#endif
