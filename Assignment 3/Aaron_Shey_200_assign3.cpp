#include "Aaron_Shey_coin.h";
#include <iostream>
using namespace std;
/*
float roll (Coin *coins[3]) {
    for (Coin i : coins) {

    }
}
*/
int main() {
  Coin coins[3] = {Coin(), Coin(), Coin()};
  float computerScore, playerScore = 0.00;
  int round = 0;
  cout << "Your starting balance: $0.00\nThe computer's starting balance: "
          "$0.00\n";
  while (true) {
    round += 1;

    // Player rolls:
    // Computer rolls:

    cout << "Your balance after round " << round << ": " << playerScore << "\n";
    cout << "The computer's balance after round " << round << ": "
         << computerScore << "\n";
    if (computerScore > 100 || playerScore > 100) {
      cout << "Your ending balance:" << playerScore << "\n";
      cout << "The computer's ending balance:" << computerScore << "\n";
      if (computerScore > playerScore) {
        cout << "The computer won!\n";
      } else if (computerScore == playerScore) {
        cout << "It's a tie!\n";
      } else {
        cout << "You win!\n";
      }
      break;
    }
  }
}
