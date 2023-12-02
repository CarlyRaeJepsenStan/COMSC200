
#include <iomanip>
#include <iostream>
#include <stdexcept>

#include "Array.h"
using namespace std;

Array::Array(int arraySize)
    : size(arraySize > 0
               ? arraySize
               : throw invalid_argument("Array size must be greater than 0")),
      ptr(new int[size]) {

  cout << "INSIDE (int) CONSTRUCTOR...\n\n";

  for (size_t i = 0; i < size; ++i)
    ptr[i] = 0;
}

Array::Array(const Array &arrayToCopy)
    : size(arrayToCopy.size), ptr(new int[size]) {

  cout << "INSIDE COPY CONSTRUCTOR...\n\n";

  for (size_t i = 0; i < size; ++i)
    ptr[i] = arrayToCopy.ptr[i];
}

Array::~Array() {

  cout << "INSIDE DESTRUCTOR...\n\n";
  delete[] ptr;
}

size_t Array::getSize() const { return size; }

const Array &Array::operator=(const Array &right) {

  cout << "INSIDE ASSIGNMENT OPERATOR...\n\n";

  if (&right != this) {
    cout << "NO SELF ASSIGNMENT\n\n";

    if (size != right.size) {
      delete[] ptr;
      size = right.size;
      ptr = new int[size];
    }

    for (size_t i = 0; i < size; ++i)
      ptr[i] = right.ptr[i];
  }

  else
    cout << "SELF ASSIGNMENT WAS ATTEMPTED!\n\n";

  return *this;
}

bool Array::operator==(const Array &right) const {
  if (size != right.size)
    return false;

  for (size_t i = 0; i < size; ++i)
    if (ptr[i] != right.ptr[i])
      return false;

  return true;
}

int &Array::operator[](int subscript) {

  cout << "INSIDE OF NON-CONST OPERATOR[]\n\n";

  if (subscript < 0 || subscript >= size)
    throw out_of_range("Subscript out of range");

  return ptr[subscript];
}

int Array::operator[](int subscript) const {

  cout << "INSIDE OF CONST OPERATOR[]\n\n";

  if (subscript < 0 || subscript >= size)
    throw out_of_range("Subscript out of range");

  return ptr[subscript];
}

istream &operator>>(istream &input, Array &a) {
  for (size_t i = 0; i < a.size; ++i)
    input >> a.ptr[i];

  return input;
}

ostream &operator<<(ostream &output, const Array &a) {

  for (size_t i = 0; i < a.size; ++i) {
    output << setw(12) << a.ptr[i];

    if ((i + 1) % 4 == 0)
      output << endl;
  }

  if (a.size % 4 != 0)
    output << endl;

  return output;
}
