#include "game.h"
#include <cstdlib>
#include <ctime>

// Convert user input to a Move.
Move parseMove(const std::string& input) {
    // TODO: Handle non-numeric input safely.
    int value = std::stoi(input);

    if (value == 0) {
        return ROCK; // Placeholder; exit is handled in main.
    }

    // TODO: Validate input range (1-3) and reject others.
    return static_cast<Move>(value - 1);
}

// Computer move selection.
Move getComputerMove() {
    // TODO: Make computer choose a random move.
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    int value = 0;
    return static_cast<Move>(value);
}

// Decide who wins.
Winner determineWinner(Move player, Move computer) {
    if (player == computer) {
        return NOBODY;
    }

    if ((player == ROCK && computer == SCISSORS) ||
        (player == PAPER && computer == ROCK) ||
        (player == SCISSORS && computer == PAPER)) {
        return PLAYER;
    }

    return COMPUTER;
}

// Update the score counters.
void updateScore(Winner winner, int& playerScore, int& computerScore) {
    if (winner == PLAYER) {
        playerScore++;
    }
    else if (winner == COMPUTER) {
        computerScore++;
    }
}

// Convert Move to a readable string.
std::string moveToString(Move move) {
    const char* names[] = {"Rock", "Paper", "Scissors"};
    // TODO: Guard against invalid move indexes.
    return names[static_cast<int>(move)];
}
