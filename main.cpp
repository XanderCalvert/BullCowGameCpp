#include <iostream>
#include <string>

using namespace std;

void printIntro();
string getGuessAndPrintBack();

// Entry Point
int main() {

	printIntro();

	getGuessAndPrintBack();
	getGuessAndPrintBack();

	return 0;
}
// Game introduction
void printIntro() {

	constexpr int wordLength = 5;
	cout << "Welcome to Bulls and Cows, a fun word game!" << endl;
	cout << "Can you get the " << wordLength << " letter isogram I'm thinking of?" << endl;
	return;
}

//Get a guess from the player
string getGuessAndPrintBack() {
	string Guess = "";
	cout << "What is your guess?";
	getline(cin, Guess);

	//Repeat the guess back to them
	cout << "Your guess was: " << Guess << endl;
	return Guess;
}