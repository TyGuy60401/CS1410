/*
 * Name: Ty Davis
 * Desc: Your turn 2
 *     Get a list of prime day deals from the user and
 *     then find the cheapest item in the array and show
 *     the location in the array that it takes.
 *
 * Pseudocode:
 * Greet the user friendly and introduce the task.
 * While user input is not 0 and until there is at least 5 entries:
	 * Validate the user input.
	 * If user input is bad:
		 * Tell the user that it was bad input and keep prompting.
	 * Add the user input to the list of prices
 * 
 * Iterate over the list keep track of the lowest price item and its position
 * Print out the results.
 *
 * Graceful close.
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
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;

int main() {
	// Declaring variables
	vector<double> prices;
	double tempPrice;

	// bool valid;
	int numPrices = 0;

	string errString = "Input could not be processed as a number.";

	// fill the prices vector
	while (true) {
		try {
			// valid = true;
			cout << "Next price: ";
			cin >> tempPrice;
			if (!cin) {
				throw errString;
			} else if (tempPrice < 0) {
				throw tempPrice;
			}

			if (tempPrice == 0 && numPrices < 5) {
				throw numPrices;
			} else if (tempPrice == 0) {
				break;
			}

			prices.push_back(tempPrice);
			numPrices++;

		} catch (string err) {
			cin.clear();
			cin.ignore(INT_MAX, '\n');

			cout << "Error: " << err << endl << endl;
			// valid = false;
		} catch (double err) {
			cout << "Error: " << err << " is not a positive number." << endl << endl;
		} catch (int err) {
			cout << "Error: " << "You've only input " << err << " numbers, input at least 5." << endl << endl;
		}
	}

	for (int i = 0; i < numPrices; i++) {
		cout << prices.at(i) << endl;
	}


	return 0;
}
