/*
 * Name: Ty Davis
 * Desc: Programming Lab 2
 * Taking User input to instantiate a sterling structure
 * that represents currency using pounds, shillings,
 * and pence.
 *
 * 1 pound = 20 shillings
 * 1 shilling = 12 pence
 * £6.3.5 (6 pounds, 3 shillings, 5 pence)
 *
 * Pseudocode:
 * Define the struct
 * Define the relative functions to make sterlings and add them
 * MakeSterling(pence):
	 * pounds is total // 240
	 * shillings is total - pounds * 240 // 12
	 * pence is what's left over
 * MakeSterling(pounds, shillings, pence)
	 * define a sterling struct
	 * get the total value
	 * get another sterling struct based on the total value
 * Read function:
	 * get input 1 by testing for input with a while loop
	 * get input 2
		 * if it's a word, then assume the first was a pence amount
		 * else make sure it's between 0-19 as a shilling amount
	 * if we're not using just pence:
		 * get input 3 and make sure it's between 0-11 as a pence amount
		 * return MakeSterling(pounds, shillings, pence)
	 * return MakeSterling(pounds)
 * main:
	 * Intro message
	 * Read sterling 1
	 * Read sterling 2
	 * Echo to the user what they input
	 * Add the sterlings
	 * Print the result to the user
 *	
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
using namespace std;


struct sterling {
	int pounds;
	int shillings;
	int pence;
};

int SterlingValue(sterling strl) {
	return strl.pounds * 12 * 20 + strl.shillings * 12 + strl.pence;
}

sterling MakeSterling(int pence) {
	sterling newSterling;
	newSterling.pounds = pence / (12 * 20);
	newSterling.shillings = (pence - (newSterling.pounds * 12 * 20)) / 12;
	newSterling.pence = pence - (newSterling.pounds * (12 * 20)) - (newSterling.shillings * 12);
	return newSterling;
}

sterling MakeSterling(int pounds, int shillings, int pence) {
	sterling newSterling;
	newSterling.pounds = pounds;
	newSterling.shillings = shillings;
	newSterling.pence = pence;

	int strlValue = SterlingValue(newSterling);
	newSterling = MakeSterling(strlValue);
	return newSterling;
}

sterling AddSterling(sterling strl1, sterling strl2) {
	int combinedValue = SterlingValue(strl1) + SterlingValue(strl2);
	return MakeSterling(combinedValue);
}

void Print(sterling& strl) {
	cout << "£" << strl.pounds << "." << strl.shillings << "." << strl.pence;
}

sterling Read() {
	int in1, in2, in3;
	bool usePence = false;

	cout << "Input 1 number to input amount as pence. Enter anything non-numeric on second prompt." << endl;
	cout << "Input 3 numbers to input amount as pounds shillings pence." << endl;
	cout << ">> ";
	while (true) {
		cin >> in1;
		if (cin.fail()) {
			cin.clear();
			cin.ignore(10000, '\n');
			cout << "Please enter a positive number." << endl;
			continue;
		}
		if (in1 < 0) {
			cout << "Please enter a positive number." << endl;
			continue;
		}
		break;
	}
	while (true) {
		cout << ">> ";
		cin >> in2;
		if (cin.fail()) {
			cin.clear();
			cin.ignore(10000, '\n');
			usePence = true;
			break;
		}
		if (in2 >= 20 || in2 < 0) {
			cout << "Input a number between 0-19 for the amount of shillings." << endl;
			continue;
		}
		break;
	}
	if (!usePence) {
		while (true) {
			cout << ">> ";
			cin >> in3;
			if (cin.fail()) {
				cin.clear();
				cin.ignore(10000, '\n');
				cout << "Please enter a number." << endl;
				continue;
			} else if (in3 >= 12 || in3 < 0) {
				cout << "Input a number between 0-11 for the amount of pence." << endl;
				continue;
			}
			break;
		}
		return MakeSterling(in1, in2, in3);
	}

	return MakeSterling(in1);
}

int main() {
	cout << "Today we are going to be using the sterling adder." << endl;
	cout << "Input two shillings and I'll print out the result." << endl;
	sterling strl1 = Read();
	sterling strl2 = Read();

	cout << "You input these: ";
	Print(strl1);
	cout << " and ";
	Print(strl2);
	cout << endl;

	sterling sumStrl = AddSterling(strl1, strl2);
	cout << "The sum of these 2 sterlings is ";
	Print(sumStrl);
	cout << endl;

	cout << "Thanks for using the sterling adder!";



	cout << endl;
	return 0;
}
