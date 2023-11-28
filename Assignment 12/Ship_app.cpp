#include "Aaron_Shey_CargoShip.h"
#include "Aaron_Shey_CruiseShip.h"
#include "Aaron_Shey_Ship.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
  // Create an array of Ship pointers, initialized with
  // the addresses of 3 dynamically allocated objects.
  Ship *ships[3] = {new Ship("", "an actual year"),
                    new CruiseShip("", "", 0),
                    new CargoShip("", "", 0)
};

  // Call each object's print function using polymorphism.
  for (int index = 0; index < 3; index++) {
    ships[index]->print();
    cout << "----------------------------\n";

    delete ships[index];    // release memory (avoid memory leak)
    ships[index] = nullptr; // avoid dangling pointer
  }

  system("PAUSE");
  return 0;
}
