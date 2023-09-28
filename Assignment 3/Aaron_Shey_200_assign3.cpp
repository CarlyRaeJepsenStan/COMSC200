#include "Aaron_Shey_Coin.h"
#include <iostream>
using namespace std;
// 7. This is a function prototype.  See below for definition.
float roll(Coin coins[3]);
int main() {
  Coin coins[3] = {Coin(0.25), Coin(0.10), Coin(0.05)};
  float computerScore = 0.00, playerScore = 0.00;

  int round = 0;
  // 8.  I hardcoded the original balance message, because it would never change
  // and printing the true balance would take double the characters.
  cout << "Your starting balance: $0.00\nThe computer's starting balance: "
          "$0.00\n";
  while (true) {
    // 9.  The round must be incremented immediately, to ensure round 0 isn't
    // printed.
    round += 1;
    playerScore += roll(coins);
    computerScore += roll(coins);
    cout << "Your balance after round " << round << ": " << playerScore << "\n";
    cout << "The computer's balance after round " << round << ": "
         << computerScore << "\n";
    if (computerScore > 1.00 || playerScore > 1.00) {
      cout << "Your ending balance: " << playerScore << "\n";
      cout << "The computer's ending balance: " << computerScore << "\n";
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
// 10. This is the function definition.  Thanks to the additional variables of
// sideValue and value,
//  calculation can be entirely completed on line 41.
float roll(Coin coins[3]) {
  float out = 0.00;
  for (int i = 0; i < 3; i++) {
    coins[i].toss();
    out += (coins[i].getSideValue() * coins[i].getValue());
  }
  return out;
}
