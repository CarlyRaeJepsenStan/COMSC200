#include "Aaron_Shey_IntegerSet.h"
#include <iostream>
#include <vector>
using namespace std;
#ifndef INTEGERSET_H
#define INTEGERSET_H
IntegerSet::IntegerSet() : internal(vector<bool>(100, false)){};

IntegerSet::IntegerSet(int array[], int size) {
  vector<bool> internal(100, false);
  for (int i = 0; i < size; i++) {
  }
}
#endif