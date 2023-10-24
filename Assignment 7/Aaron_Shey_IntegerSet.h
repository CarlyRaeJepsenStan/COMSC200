#include <vector>
using namespace std;
class IntegerSet {
private:
  vector<bool> internal;

public:
  IntegerSet();
  IntegerSet(int[], int);
  vector<bool> unionOfSets(IntegerSet);
  vector<bool> intersectionOfSets(IntegerSet);
  bool isEqualTo();
  void insertElement(int);
  void deleteElement(int);
  void printSet();
  void inputSet();
};