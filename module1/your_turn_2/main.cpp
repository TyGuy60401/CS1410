/*
 * Name: Ty Davis
 * Desc: Your turn 2
 *     Program that generates a pseudo random number between 1 and 10 and tells the user if they got it right.
 *
 * Pseudocode:
 *     Greet the user friendly and tell them to guess a number between 1 and 10.
 *     Validate the user input.
 *
 *     Calculate the difference between the guessed number and the generated number.
 *
 *     if the difference is positive:
 *			Return that the guess was too high.
 *	   else if the difference is negative:
 *			Return that the guess was too low.
 *	   else 
 *			Return that the guess was just right!
 *
 *     Graceful close.
 *
 *  Integrity Statement:
 *  
 *  I certify that this assignment represent my own work.
 *  I have not used any unauthorized or unacknoledged assistance
 *  or sources in completing it, including free or commercial
 *  systems or services offered on the internet or code-generating
 *  systems embedded into software.
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	// Declare variables
	int guess;
	int diff;
	bool userInputSuccessful;

	// set the seed to be random
	srand(time(0));

	// Get the user input.
	cout << "Welcome!\n";
	cout << "Enter a number between 1 and 10 and see if you get it right!\n>> ";
	if (!(cin >> guess)) {
		cout << "Invalid input, please enter a number between 1 and 10.\n";
		return -1;
	}

	cout << guess << endl;

	if (guess > 10) {
		cout << "Invalid input, " << guess << " is too high.\n";
		return -1;
	} else if (guess < 1) {
		cout << "Invalid input, " << guess << " is too low.\n";
		return -1;
	}

	// calculate the diff between the guessed number and the generated number
	diff = guess -  (rand() % 10) + 1;

	if (diff > 0) {
		cout << "You were too high!\n";
	} else if (diff < 0) {
		cout << "You were too low!\n";
	} else {
		cout << "You got it! " << guess << " was the right answer!\n";
	}

	cout << "Thanks for playing!\n";
	

	return 0;
}
