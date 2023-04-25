# Explaination of blackjack:

To write a blackjack game, a basic understanding of how blackjack works is necessary. To quickly explain the relevant aspects:

**(1)**   The player and the dealer both attempt to get as close to 21 without passing it. If someone gets exactly 21, then that is called a 
           blackjack, and they automatically win. If someone ends up with a number greater than 21, they automatically lose (bust) no matter the score
           of the other person.
 
**(2)**   The player is dealt two cards, each representing numbers 1-10. They are then asked if they want to "hit" or "stand". If they hit, they are given
          another card (1-10), until they decide they want to "stand", meaning they stop at that number.
         
**(3)**   The players number is compared to that of the dealer, and whoever's is higher wins that round.

# Explaination of the code:

Starting with our headers, we have:

    #include <iostream>
    #include <cstdlib>
    #include <ctime>
    
iostream is included for normal in/out functions, cstdlib is used for the random number generator function, rand(), and ctime is used for srand(time(0)).

Moving on to our main function:

        int main() {
        srand(time(0)); 
            char play = 'y';
            while (play == 'y'){
            
            ...
            
            }
       }
       
The srand(time(0)) is used as part of our random number generator. a variable "play" is created, and the while loop runs as long as play is 'y'. 
The player is prompted at the end of the game to enter 'y' if they would like to play again, so this while loop makes playing again possible.

    int playerScore = 0; 
    int dealerScore = rand() % 11 + 16; 

    cout << "Welcome to Blackjack!\n\n";
    
    int card1 = rand() % 10 + 1;
    int card2 = rand() % 10 + 1;
    playerScore = card1 + card2;
    cout << "You were dealt a " << card1 << " and a " << card2 << ". Your score is " << playerScore << ".\n\n";

All of this code is executed before the player has any input. The variable 'playerScore' is set to 0 at the beginning of the game, and the dealer's score
(dealerScore) is a randomly generated number 1 to 11, with 16 added to it. This is a simple way of viewing the dealer's score: the dealer will always hit on any number
below 16 and stand on any number greater than 17. 

for the player's score, two variables labeled 'card1' and 'card2' are randomly generated from 1 to 10. (rand % 10 gives a number 0 to 9, so adding one gives 1 to 10)
the two integers are added together and assigned to playerScore, then displayed in the cout statement.

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
    
a variable 'choice' is created, and inside a while statement that runs while the player's score is below 21 are two if statements. If the player chooses to hit
(inputs 'h'), then a variable 'card' is set to a random number 1-10 and added to his score. A cout statement relays that information to the player. If 
the player chooses to stand (inputs 's'), then the while statement is exited. 

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
        } 
    }
        
Sitting right after the while statement is an if statement that tells the player that they lose. Two else statements are created for the other two outcomes:
If the player's score is 21, they automatically win and get a blackjack. The last else runs if the player's score falls under 21 after the while statement stops running.
It displays the player's score, and then the dealer's score in two cout statements.

This third case has an 'if' as well as an 'elseif' statement. The first one runs if the dealer busts (gets over 21), and tells the player that they win.
The 'elseif' runs if the dealer's score is greater than or equal to the player's. It tells the player that the dealer won.

Closing out our while statement, then our main function:

        cout << "Play again? (y/n) ";
        cin >> play;
    }
        return 0;
    }
    
 At the end of the while statement, the user is prompted to enter yes or no to playing again, and their response is stored as 'play'. The while statement
 runs again if play = 'y'.


    
 
