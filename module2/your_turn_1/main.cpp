/*
 * Name: Ty Davis
 * Desc: Your turn 5.12 - vectors
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
 * Test cases are provided in the accompanying nodes.md file
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
	int numPrices = 0;
	double lowestPrice;
	double sum;
	int lowestPriceIndex;

	string errString = "Input could not be processed as a number.";
	cout << "Welcome to the Amazon Prime Day Deal tracker." << endl;
	cout << "Input your prices one at a time (at least 5) and I'll" << endl;
	cout << "tell you what your best deal was!" << endl;

	// fill the prices vector
	while (true) {
		try {
			cout << "Next price (0 to end): ";
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

			cout << "Error: " << err << endl << "Please try again." << endl;
		} catch (double err) {
			cout << "Error: " << err << " is not a positive number." << endl << "Please try again." << endl;
		} catch (int err) {
			cout << "Error: " << "You've only input " << err << " numbers, input at least 5." << endl << "Please try again." << endl;
		}
	}

	lowestPrice = prices.at(0);
	lowestPriceIndex = 0;
	sum = lowestPrice;

	for (int i = 1; i < numPrices; i++) {
		sum += prices.at(i);
		if (prices.at(i) < lowestPrice) {
			lowestPrice = prices.at(i);
			lowestPriceIndex = i;
		}
	}
	cout.precision(2);
	cout << "The lowest price listed was $" << fixed << lowestPrice;
	cout << " at index " << lowestPriceIndex << "." << endl;
	cout << "What a deal!" << endl << endl;

	cout << "The total cost of all the given prices was $" << sum << "." << endl;

	cout << "Thanks for using the Amazon Prime Day Deal tracker. Come again!" << endl;



	return 0;
}
