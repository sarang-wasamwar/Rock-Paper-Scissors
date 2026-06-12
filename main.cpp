#include "game.h"
#include <iostream>

int main() {
    std::cout << "Rock Paper Scissors (beginner project)\n";
    std::cout << "Enter 1=Rock, 2=Paper, 3=Scissors, 0=Exit\n\n";

    int playerScore = 0;
    int computerScore = 0;

    bool keepPlaying = true;
    while (keepPlaying) {
        std::string input;
        std::cout << "Your choice: ";
        std::getline(std::cin, input);
        
        if ( input != "0" && input != "1" && input != "2" && input != "3" ) {
            std::cout << "Invalid Input! Please Ensure to Enter 0, 1, 2, or 3.\n" ;
            continue ;
        }

        Move playerMove = parseMove(input);

        if (input == "0") {
            std::cout << "Exiting...\n";
            // TODO: Stop the game when the user chooses exit.
        }

        Move computerMove = getComputerMove();

        std::cout << "You played: " << moveToString(playerMove) << "\n";
        std::cout << "Computer played: " << moveToString(computerMove) << "\n";

        Winner winner = determineWinner(playerMove, computerMove);
        updateScore(winner, playerScore, computerScore);

        std::cout << "Score -> Player: " << playerScore
                  << " | Computer: " << computerScore << "\n\n";
    }

    return 0;
}
