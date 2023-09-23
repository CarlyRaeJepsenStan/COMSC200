#include "Aaron_Shey_Coin.h"
#include <iostream>
using namespace std;
float roll(Coin coins[3]);
int main() {
  Coin coins[3] = {Coin(0.25), Coin(0.10), Coin(0.05)};
  float computerScore = 0.00, playerScore = 0.00;

  int round = 0;
  cout << "Your starting balance: $0.00\nThe computer's starting balance: "
          "$0.00\n";
  while (true) {
    round += 1;
    playerScore += roll(coins);
    computerScore += roll(coins);
    cout << "Your balance after round " << round << ": " << playerScore << "\n";
    cout << "The computer's balance after round " << round << ": "
         << computerScore << "\n";
    if (computerScore > 1.00 || playerScore > 1.00) {
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

float roll(Coin coins[3]) {
  float out = 0.00;
  for (int i = 0; i < 3; i++) {
    coins[i].toss();
    cout << coins[i].getSideUp() << coins[i].getSideValue()
         << coins[i].getValue() << "\n";
    out += (coins[i].getSideValue() * coins[i].getValue());
  }
  return out;
}
