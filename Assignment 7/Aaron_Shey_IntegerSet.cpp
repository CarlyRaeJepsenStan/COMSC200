#include "Aaron_Shey_IntegerSet.h"
#include <iostream>
#include <vector>
using namespace std;
#ifndef INTEGERSET_H
#define INTEGERSET_H
bool IntegerSet::operator[](int i) {
  return internal[i];
}
IntegerSet IntegerSet::operator=(const IntegerSet i) {
  return this;
}
IntegerSet::IntegerSet() : internal(vector<bool>(100, false)){};

IntegerSet::IntegerSet(int array[], int size) {
  vector<bool> internal(100, false);
  for (int i = 0; i < size; i++) {
    internal[array[i]] = true;
  }
}

vector<bool> IntegerSet::unionOfSets(IntegerSet in) {
  vector<bool> out(100, false);
  for (int i = 0; i < 100; i++) {
    if (this[i] == in[i] && (this[i]==true || in[i] == true)) {
      out[i]=true;
    }
  }
  return out;
}
vector<bool> IntegerSet::intersectionOfSets(IntegerSet in) {
  vector<bool> out(100, false);
  if (this[i]==true || in[i] == true) {
      out[i]=true;
    }
  return out;
}

vector<bool> IntegerSet::inputSet() {
  int u; 
  while (u > 0) {
    cout << "Enter a number: ";
    cin >> u;
    if (u > 0) {
      internal[u]=true;
    } else {
      continue;
    }
    
  }

}

bool IntegerSet::isEqualTo(IntegerSet) {
  return (this == IntegerSet);
}

void IntegerSet::insertElement(int m) {
  internal[m] = true;
}

void IntegerSet::deleteElement(int k) {
  internal[k] = false;
}

void IntegerSet::printSet() {
  for (int i = 0; i < 100; i++) {
    cout << internal[i];
  }
}


#endif