#include <cstdlib>
#include "Aaron_Shey_Die.h"
using namespace std;
//2. This is the class implementation file, usually given the same name as the header file, and includes all the source code to make the class work. 
Die::Die(int numSides) {
 sides = numSides; 
  Die::roll();
}
void Die::setSides(int numSides){
  sides = numSides;
}

void Die::roll() {
  //3.  Here we generate a pseudo-random number between 0 and the number of sides the die has.  
  value = rand() % sides + 1;
}

int Die::getSides() const {
   return sides;
}

int Die::getValue() const {
  return value;
}

