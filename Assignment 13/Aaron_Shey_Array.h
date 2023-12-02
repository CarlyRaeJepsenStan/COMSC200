#ifndef ARRAY_H
#define ARRAY_H
// 1.  cstddef is necessary to use size_t.  This makes my code safer.
#include <cstddef>
#include <iostream>
// 2.  This is the first line in any templated class.  It tells the compiler to
// expect a generic type T.
template <class T> class Array {

private:
  // 3.  This part tripped me up - the pointer must be T, not int.
  size_t size;
  T *ptr;

public:
  // 4.  I wasn't able to figure out how to get constructor to fill the array
  // with default values.  T(0) or static_cast<T>(0) didn't work, creating a
  // difficult error.
  Array(int arraySize) : size(arraySize), ptr(new T[size]) {}

  // 5.  None of these functions are necessary, but I wrote them fori
  // completeness.
  Array(const Array<T> &arrayToCopy)
      : size(arrayToCopy.size), ptr(new T(size)) {
    for (size_t i = 0; i < size; ++i)
      ptr[i] = arrayToCopy.ptr[i];
  }

  ~Array() { delete[] ptr; }

  size_t getSize() const { return size; }

  const Array &operator=(const Array<T> &right) {
    if (&right != this) {
      if (size != right.size) {
        delete[] ptr;
        size = right.size;
        ptr = new int[size];
      }
      for (size_t i = 0; i < size; ++i)
        ptr[i] = right.ptr[i];
    }
    return *this;
  }

  int &operator[](int subscript) { return ptr[subscript]; }

  int &operator[](int subscript) const { return ptr[subscript]; }
  // 6.  This is the istream operator, allowing us to conveniently stream input
  // directly into the arrays
  friend std::istream &operator>>(std::istream &input, Array<T> &a) {
    for (size_t i = 0; i < a.size; ++i) {
      input >> a.ptr[i];
    }
    return input;
  }
  // 7.  This is the ostream operator, allowing us to output everything.  I
  // added a \n for readability, but it also makes a space in the beginning. I'm
  // not sure why.
  friend std::ostream &operator<<(std::ostream &output, const Array<T> &a) {
    for (size_t i = 0; i < a.size; ++i) {
      output << a.ptr[i] << "\n";
    }
    return output;
  }
};

#endif