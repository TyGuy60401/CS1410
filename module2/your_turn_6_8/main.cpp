/*
 * Name: Ty Davis
 * Desc: Your turn 6.14 - Enums
 * Create a struct called Friend with 4 member variables
 * and include the structs in an enumeration.
 *
 * Pseudocode:
 * Declare the smallest function
 * Overload the smallest function to accept an array
 *
 * Friendly welcome
 * Loop and grab at least 5 values with error checking.
 * Call the overloaded smallest function.
 * Print the result.
 * 
 * 
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
#include <vector>
using namespace std;


int smallest(int val1, int val2, int val3) {
	int small = val1;
	small = val2 < small ? val2 : small;
	small = val3 < small ? val3 : small;
	return small;
}

int smallest(vector<int>& vals, int& smallest, int& largest) {
	int small;
	int large;
	small = vals.at(0);
	large = vals.at(0);
	for (int i = 0; i < vals.size(); i++) {
		small = (vals.at(i) < small) ? vals.at(i) : small;
		large = (vals.at(i) > large) ? vals.at(i) : large;
	}
	smallest = small;
	largest = large;
	return small;
}

int main() {
	vector<int> vals;
	int tempVal;
	int count = 0;

	cout << "Welcome to the smallest and largest machine." << endl;
	cout << "Original function: smallest(1, 5, 100) returns " << smallest(1, 5, 100) << endl;
	cout << "Now let's do that with an array that you'll provide!" << endl;
	cout << "Enter at least 5 numbers, when you're done enter anything that isn't a number." << endl;
	
	while (true) {
		cout << "Number: ";
		cin >> tempVal;

		if (cin.fail()) {
			cin.clear();
			cin.ignore(10000, '\n');
			if (count < 5) {
				cout << "Please enter a number." << endl;
				continue;
			}
			break;
		}
		count++;
		vals.push_back(tempVal);
	}

	int smallest_num, largest_num;
	smallest(vals, smallest_num, largest_num);
	cout << "Thanks for entering numbers! You entered " << count << " numbers." << endl;
	cout << "The smallest in your array was " << smallest_num << " and the largest in your array was " << largest_num << endl;
}
