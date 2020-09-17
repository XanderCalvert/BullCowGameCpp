#include <iostream>
#include <string>
#include "FBullCowGame.h"

void printIntro();
void playGame();
std::string getGuess();
bool askToPlayAgain();

FBullCowGame BCGame; // Instantitate a new game

// Entry Point
int main() {
	bool bPlayAgain = 0;
	do {
		printIntro();
		playGame();
		// TODO add game summary
		bPlayAgain = askToPlayAgain();
	} while (bPlayAgain);


	return 0;
}

// Game introduction
void printIntro() {
	constexpr int wordLength = 5;
	std::cout << "Welcome to Bulls and Cows, a fun word game!" << std::endl;
	std::cout << "Can you get the " << wordLength << " letter isogram I'm thinking of?" << std::endl;
	return;
}

void playGame() {
	BCGame.Reset();
	int MaxTries = BCGame.GetMaxTries();
	std::cout << MaxTries << std::endl;

	// Loop for the number of turns asking for guesses
	for (int count = 0; count < MaxTries; count++) {
		std::string Guess = getGuess();
		std::cout << "Your guess was: " << Guess << std::endl;
		std::cout << std::endl;
	}

	// summarise game
}

std::string getGuess() {
	// Get a guess from the player
	int CurrentTry = BCGame.GetCurrentTry();
	std::cout << "Try: " << CurrentTry << ".  What is your guess? ";
	std::string Guess = "";
	std::getline(std::cin, Guess);
	return Guess;
}

bool askToPlayAgain() {
	std::cout << "Do you want to play again? (y/n)";
	std::string Response = "";
	std::getline(std::cin, Response);
	return (Response[0] == 'y') || (Response[0] == 'Y');
}