#include "Aaron_Shey_IntegerSet.h"
#include <iostream>
#include <vector>
using namespace std;
#ifndef INTEGERSET_H
#define INTEGERSET_H
// 3.  I also added this helper function, to make my code more concise by
// replacing repeated lines.
bool validate(int in) {
  bool out = false;
  if (0 <= in && in <= 100) {
    out = true;
  }
  return out;
}

IntegerSet IntegerSet::operator=(const IntegerSet i) { return *this; }

bool IntegerSet::operator[](int i) { return internal[i]; }

// 4.  I made each IntegerSet 101 elements long, because the numbers from 0 to
// 100 have
IntegerSet::IntegerSet() : internal(vector<bool>(101, false)){};

IntegerSet::IntegerSet(int array[], int size)
    : internal(vector<bool>(101, false)) {
  for (int i = 0; i < size; i++) {
    // 5.  This is where I encountered my first error!  My code was failing to
    // properly handle negative elements, even though I had the validate
    // function in it already.  I'm not sure what fixed it, but it went away.'
    if (validate(array[i])) {
      internal[array[i]] = true;
    } else {
      cout << "Invalid insert attempted!\n";
    }
  }
}

IntegerSet IntegerSet::inputSet() {
  IntegerSet out;
  int u;
  while (true) {
    cout << "Enter a number (-1 to end ): ";
    cin >> u;
    if (u < 0) {
      break;
    }
    if (validate(u)) {
      out.insertElement(u);
    } else {
      cout << "Invalid input. Enter a number between 0 and 99." << endl;
    }
  }
  cout << "Entry complete\n";
  return out;
}

IntegerSet IntegerSet::unionOfSets(IntegerSet in) {
  IntegerSet out;
  for (int i = 0; i < 101; i++) {
    // 6.  I am particularly proud of this line - it depends on C++'s built-in
    // truthiness to ensure that both elements are true.  Its concision and
    // cleverness are unmatched.
    if (internal[i] && in[i]) {
      out.insertElement(i);
    }
  }
  return out;
}

IntegerSet IntegerSet::intersectionOfSets(IntegerSet in) {
  IntegerSet out;
  for (int i = 0; i < 101; i++) {
    // 7.  I also found this line to be particularly clean and concise, similar
    // to my other comment above.
    if (internal[i] || in[i]) {
      out.insertElement(i);
    }
  }
  return out;
}

// 8.  I found this function to be rather redundant; vectors already have a
// equality operator.
bool IntegerSet::isEqualTo(IntegerSet in) { return (internal == in.internal); }

// 9.  These two functions were very similar.  I wonder if there is a way to
// combine theme to make my code more concise.
void IntegerSet::insertElement(int m) {
  if (validate(m)) {
    internal[m] = true;
  }
}

void IntegerSet::deleteElement(int k) {
  if (validate(k)) {
    internal[k] = false;
  }
}

// 10.  I was contemplating using this->internal syntax for most of my
// functions, but decided not to.  This was probably the easiest function to
// write.
void IntegerSet::printSet() {
  cout << "{ ";
  for (int i = 0; i < 101; i++) {
    if (internal[i]) {
      cout << i << " ";
    } else {
      continue;
    }
  }
  cout << "}\n";
}

#endif