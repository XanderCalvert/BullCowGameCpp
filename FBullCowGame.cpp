#include "FBullCowGame.h"

void FBullCowGame::Reset() {
	return;
}

FBullCowGame::FBullCowGame() {
	Reset();
}

void FBullCowGame::Reset() {
	constexpr int maxTries = 8;
	MyMaxTries = maxTries;
	
	MyCurrentTry = 1;

	return;
}

int FBullCowGame::GetMaxTries() const {
	return MyMaxTries;
}

int FBullCowGame::GetCurrentTry() const {
	return MyCurrentTry;
}

bool FBullCowGame::IsGameWon() const {
	return false;
}

bool FBullCowGame::CheckGuessValidity(std::string) {
	return false;
}
