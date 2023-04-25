#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); 
char play = 'y';
while (play == 'y'){
    int playerScore = 0; 
    int dealerScore = rand() % 11 + 16; 

    cout << "Welcome to Blackjack!\n\n";

    
    int card1 = rand() % 10 + 1;
    int card2 = rand() % 10 + 1;
    playerScore = card1 + card2;
    cout << "You were dealt a " << card1 << " and a " << card2 << ". Your score is " << playerScore << ".\n\n";

    char choice;
    while (playerScore < 21) {
        cout << "Do you want to hit or stand? (h/s)\n";
        cin >> choice;

        if (choice == 'h') {
            int card = rand() % 10 + 1;
            playerScore += card;
            cout << "You were dealt a " << card << ". Your score is now " << playerScore << ".\n\n";
        } else if (choice == 's') {
            break;
        }
    }

    if (playerScore > 21) {
        cout << "Bust! You lose.\n";
    } else if (playerScore == 21) {
        cout << "Blackjack! You win!\n";
    } else {
        cout << "You stand with a score of " << playerScore << ".\n\n";

        cout << "The dealer's score is " << dealerScore << ".\n";
        if (dealerScore > 21) {
            cout << "Dealer busts! You win!\n";
        } else if (dealerScore >= playerScore) {
            cout << "Dealer wins!\n";
        } else {
        }
    }
    cout << "You win!\nPlay again? (y/n) ";
    cin >> play;
}
    return 0;
}