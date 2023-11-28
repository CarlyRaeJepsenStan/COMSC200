// 1.  This assignment wasn't too hard!  I finished it in under an hour.
// 2.  These first two lines were actually pretty tough - I completely forgot
// that include guards need to go above the lines that include the header files.
// Also, this is the only file that needs include guards, because it is the only
// base class.
#ifndef SHIP_H
#define SHIP_H
#include <string>
// 3.  I learned this syntax recently: using namespace std; can create naming
// collisions, and isn't good practice for larger projects.
// However, to avoid having to write std::string everywhere, I can use this
// syntax to both protect my code and make it more concise.
using std::string;
class Ship {
private:
  string name;
  string year;

public:
  // 4. Here are the getters, setters, and member functions.
  Ship(string n, string y);
  string getName() const;
  string getYear() const;
  void setName(string n);
  void setYear(string y);

  // 5.  By setting this function virtual, it can be overridden in the derived
  // classes.
  virtual void print() const;

  // 6.  While I could have put the entire destructor in the header file, I
  // decided to put it in the .cpp file instead for ease of reading.
  virtual ~Ship();
};
#endif