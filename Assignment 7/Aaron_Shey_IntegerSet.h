#include <vector>
using namespace std;
class IntegerSet {
private:
  vector<bool> internal;

public:
  IntegerSet operator=(const IntegerSet);
  IntegerSet();
  IntegerSet(int[], int);
  IntegerSet unionOfSets(IntegerSet);
  IntegerSet intersectionOfSets(IntegerSet);
  bool isEqualTo(IntegerSet);
  void insertElement(int);
  void deleteElement(int);
  void printSet();
  IntegerSet inputSet();
};