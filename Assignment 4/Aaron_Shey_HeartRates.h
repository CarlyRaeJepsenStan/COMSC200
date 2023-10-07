#include "string"
#include "vector"
using namespace std;
#ifndef HEARTRATE_H
#define HEARTRATE_H

#include <string>
// 1.  This is the HeartRate class, with all the getters, setters, constructors,
// and utility functions.
class HeartRate {
private:
  string firstName, lastName;
  int birthDay, birthMonth, birthYear;

public:
  // 2. This is the constructor with parameters for birth day and name.
  HeartRate(int, int, int, string, string);
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

  // 3.  This utility function combines all the above variables into a single
  // slash-separated string.
  string getBirthDateFull();

  int getAge(vector<int>);

  int getMaximumHeartRate(int);
  // 4. This utility function returns a vector with the maximum and minimum
  // target heart rate.
  vector<double> getTargetHeartRate(int);
};

#endif
