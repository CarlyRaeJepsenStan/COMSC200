#include <vector>
using namespace std;
class IntegerSet {
private:
  vector<bool> internal;

public:
  // 1.  Here are all the member functions, as directed by the assignment file.
  IntegerSet operator=(const IntegerSet);
  // 2. I added an overloaded subscript operator, to make my code simpler.
  bool operator[](int);
  IntegerSet();
  IntegerSet(int[], int);
  IntegerSet inputSet();
  IntegerSet unionOfSets(IntegerSet);
  IntegerSet intersectionOfSets(IntegerSet);
  bool isEqualTo(IntegerSet);
  void insertElement(int);
  void deleteElement(int);
  void printSet();
};