#include "Aaron_Shey_IntegerSet.h"
#include <iostream>
#include <vector>
using namespace std;
#ifndef INTEGERSET_H
#define INTEGERSET_H

IntegerSet IntegerSet::operator=(const IntegerSet i) { return *this; }

IntegerSet::IntegerSet() : internal(vector<bool>(101, false)){};

IntegerSet::IntegerSet(int array[], int size)
    : internal(vector<bool>(101, false)) {
  for (int i = 0; i < size; i++) {
    if (array[i] <= 100 && array[i] >= 0) {
      internal[array[i]] = true;
    } else {
      cout << "Invalid insert attempted!\n";
    }
  }
}

IntegerSet IntegerSet::unionOfSets(IntegerSet in) {
  IntegerSet out;
  for (int i = 0; i < 101; i++) {
    if (internal[i] && in[i]) {
      out.insertElement(i);
    }
  }
  return out;
}
IntegerSet IntegerSet::intersectionOfSets(IntegerSet in) {
  IntegerSet out;
  for (int i = 0; i < 101; i++) {
    if (internal[i] || in[i]) {
      out.insertElement(i);
    }
  }
  return out;
}

IntegerSet IntegerSet::inputSet() {
  IntegerSet out;
  int u;
  while (true) {
    cout << "Enter a number (negative to stop): ";
    cin >> u;
    if (u < 0) {
      break;
    }
    if (u >= 0 && u <= 100) {
      out.insertElement(u);
    } else {
      cout << "Invalid input. Enter a number between 0 and 99." << endl;
    }
  }
  return out;
}

bool IntegerSet::isEqualTo(IntegerSet in) { return (internal == in.internal); }

void IntegerSet::insertElement(int m) { internal[m] = true; }

void IntegerSet::deleteElement(int k) {
  if (k >= 0 && k <= 100) {
    internal[k] = false;
  }
}

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