/*
 * Name: Ty Davis
 * Desc: Programming Lab 4 - Fraction overloading
 * Fractions
 * Small program for arithmetic with fraction
 * objects. Look at fraction.cpp for psuedocode
 * of the respective fraction functions
 *	
 * Psuedocode for main:
 * repeat until exit:
	 * getUserAction()
	 * get first fraction
	 * get second fraction
	 * do the arithmetic
	 * print result
 *	
 * ==================================================
 * Test cases are found in the combined notes.md file
 *
 * Integrity Statement:
 *  
 * I certify that this assignment represent my own work.
 * I have not used any unauthorized or unacknoledged assistance
 * or sources in completing it, including free or commercial
 * systems or services offered on the internet or code-generating
 * systems embedded into software.
*/
#include <iostream>
#include "fraction.h"
using namespace std;


// user possible actions
enum action {
	ADD, SUB, MULT, DIV, EXIT
};

// Printing the menu for user actions
void printMenu() {
	cout << "Choose an option below:" << endl;
	cout << "  A add" << endl;
	cout << "  S subtract" << endl;
	cout << "  M multiply" << endl;
	cout << "  D divide" << endl;
	cout << "  E exit" << endl;
}

// get the user desired action
action getUserAction() {
	// starts without a value
	bool noActionChosen = false;
	action userAction;
	
	// loop until valid response
	do {
		noActionChosen = false;
		printMenu();
		char userChoice;
		cin >> userChoice;
		// switching to accept capital or lower-case letters
		switch (userChoice) {
			case 'A':
			case 'a':
				userAction = ADD;
				break;
			case 'S':
			case 's':
				userAction = SUB;
				break;
			case 'M':
			case 'm':
				userAction = MULT;
				break;
			case 'D':
			case 'd':
				userAction = DIV;
				break;
			case 'E':
			case 'e':
				userAction = EXIT;
				break;
			default:
				// catch the errors without a try/catch
				cout << "That was an incorrect input. Try again." << endl;
				noActionChosen = true;
		}

	} while (noActionChosen);

	return userAction;
}



int main() {
	// graceful welcome
	cout << "Welcome to the fraction calculator!" << endl;

	Fraction tempFrac(7, 8);
	int x = 7;

	Fraction resultTemp = tempFrac + x;
	cout << resultTemp << endl;

	cout << "END TESTING" << endl;

	// do this until the user exits
	while (true) {
		// get user action
		action userAction = getUserAction();
		if (userAction == EXIT) {
			// user wants to exit
			cout << "Thanks for using the fraction calculator!" << endl;
			return 0;
		}

		// first fraction input
		cout << "Input the numerator and denominator for the first fraction." << endl;
		Fraction frac1;
		cin >> frac1;
		cout << endl;

		// second fraction input
		cout << "Input the numerator and denominator for the second fraction." << endl;
		Fraction frac2;
		cin >> frac2;
		cout << endl;

		Fraction result;
		string opStr;
		// determine what to do based on user action
		try {
			switch (userAction) {
				case ADD:
					result = frac1 + frac2;
					opStr = "+";
					break;
				case SUB:
					result = frac1 - frac2;
					opStr = "-";
					break;
				case MULT:
					result = frac1 * frac2;
					opStr = "×";
					break;
				case DIV:
					result = frac1 / frac2;
					opStr = "÷";
					break;
				default:
					cout << "Couldn't perform an operation" << endl;
					continue;
					break;
			}
		} catch (long int err) {
			// catch if there are any errors and try again
			if (err == 0) {
				cout << "Can't divide by zero." << endl;
				cout << "Try again." << endl;
				continue;
			}
		}

		// print out the results
		cout << frac1 << " " << opStr << " " << frac2;
		cout << " = " << result << endl << endl;
	};

	return 0;
}
