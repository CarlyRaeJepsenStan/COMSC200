#include "Aaron_Shey_Card.h"
#include <string>
using namespace std;
#ifndef CARD_H
#define CARD_H

Card::Card(int face, int suit) : face(face), suit(suit) {}

const string Card::faces[13] = {"Ace",  "Deuce", "Three", "Four", "Five",
                                "Six",  "Seven", "Eight", "Nine", "Ten",
                                "Jack", "Queen", "King"};
const string Card::suits[4] = {"Hearts", "Diamonds", "Clubs", "Spades"};

string Card::toString() const { return faces[face] + " of " + suits[suit]; }
#endif