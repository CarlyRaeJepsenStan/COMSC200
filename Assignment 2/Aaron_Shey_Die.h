#ifndef DIE_H
#define DIE_H
//1. This is the class specification file.  It includes the bare-bones methods and functions in the class, without any of the code.
class Die {
  public: 
    Die(int numSides);
    void setSides(int numSides);
    void roll();
    int getSides() const;
    int getValue() const;
  private: 
    int sides;
    int value;
};
#endif 
