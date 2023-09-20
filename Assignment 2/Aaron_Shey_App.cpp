#include <iostream>
#include <cstdlib>
#include "Aaron_Shey_Die.h"
using namespace std; 

int main() {
  cout << "Welcome to Blackjack!  Your goal is to get as close to 21 without going over." << "\n";
  //4. Create both the player and computer die.  
  Die playerDie = Die(6);
  int playerScore = 0;
  Die computerDie = Die(6);
  int computerScore = 0;
  //5. Do the initial roll, like the initial dealing of cards in blackjack.  
  
  playerDie.roll();
  playerScore += playerDie.getValue();

  //6. Set a sentinel value to control the game loop.
  //7. Initially, I planned to have the player choose to play the game, but I decided against it.  I prefer this syntax to while(true), so I left it there
  char flag = 'y';
  while (flag =='y') {
    computerDie.roll();
    computerScore += computerDie.getValue();
    //8. If the computer goes over 21, end the game and show the score.
    //9. The computer isn't very smart - it'll keep rolling until it loses, so this game is pretty easy.
    if (computerScore > 21) {
      cout << "I lost!" << "\n";
      cout << "My score: " << computerScore << "\n";
      cout << "Your score: " << playerScore << "\n";
      break;
    }
    
    cout << "Your current score: " << playerScore << "\n";
    cout << "Press h to hit and s to stand" << "\n";
    char status;
    cin >> status;
    //10. Give the player a chance to choose - roll again and increase their score (h) or skip the turn (stand)
    while (true) {
      if (status == 'h') {
        playerDie.roll();
        playerScore += playerDie.getValue();
        break;
      } else if (status == 's') {
        break;
      } else {
        cout << "Press h or s" << "\n";
        cin >> status;
      }
    }

    if (playerScore > 21 ) {
      cout << "You lose!" << "\n";
      cout << "Your score: " << playerScore << "\n";
      cout << "My score: " << computerScore << "\n";
      break;
    } 
    
  }
}
