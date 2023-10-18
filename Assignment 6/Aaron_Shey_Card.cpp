#include "Aaron_Shey_Card.h"
#include <string>
using namespace std;
#ifndef CARD_H
#define CARD_H
// 2.  Here I used a familiar class initialization list for the constructor.
Card::Card(int face, int suit) : face(face), suit(suit) {}

// 3.  The static keyword is only allowed in header files, so it isn't here.
const string Card::faces[13] = {"Ace",  "Deuce", "Three", "Four", "Five",
                                "Six",  "Seven", "Eight", "Nine", "Ten",
                                "Jack", "Queen", "King"};
const string Card::suits[4] = {"Hearts", "Diamonds", "Clubs", "Spades"};

string Card::toString() const {
  return faces[face] + " of " + suits[suit] + " ";
}
#endif