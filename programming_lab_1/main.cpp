/*
 * Name: Ty Davis
 * Desc: Your turn 4
 * Program prompts the user for the length and width
 * of the room and outputs the area of the room.
 *     
 *
 * Pseudocode:
 * Initialize the variables
 * Do
 *	Try
 *		Prompt the user for input
 *		validate the input
 *		throw any errors if necessary
 *		If nothing is bad, display the given input and the room size.
 *	Catch
 *		string errors: print bad string
 *		number errors: print bad number
 *		set the valid flag to false
 * ... while (not valid)
 *
 *	
 *
 *  Integrity Statement:
 *  
 *  I certify that this assignment represent my own work.
 *  I have not used any unauthorized or unacknoledged assistance
 *  or sources in completing it, including free or commercial
 *  systems or services offered on the internet or code-generating
 *  systems embedded into software.
*/
#include <ios>
#include <iostream>
using namespace std;

int main() {
	unsigned int size;
	unsigned int level = 0;
	bool valid = true;
	cout << "Welcome!" << endl;

	do {
		cout << "Enter the size of the Christmas tree (3-15): ";

		try {
			valid = true;

			cin >> size;

			if (!cin) {
				throw "Input could not be processed as a number";
			} else if (size < 3 || size > 15) {
				throw size;
			}
			cout << size << endl;

			int i;
			while (size - level > 0) {
				for (i = 0; i < size - level - 1; i++) {
					cout << " ";
				} 
				cout << "/";
				for (i = 0; i < level * 2; i++) {
					cout << " ";
				}
				cout << "\\" << endl;
				level ++;
			}
			for (i = 0; i < size * 2; i++) {
				cout << "-";
			}
			cout << endl;

			for (i = 0; i < size / 2; i++) {
				int j;
				for (j = 0; j < size - 1; j++) {
					cout << " ";
				}
				cout << "||" << endl;
			}
		} catch (string err) {
			cin.clear();
			cin.ignore(INT_MAX, '\n');

			cout << "Error: " << err << endl << endl;
			valid = false;
		} catch (unsigned int err) {
			cout << "Error: " << err << " is not a positive integer between 3 and 15 (inclusive)." << endl;
			valid = false;
		}



	} while (!valid);

	return 0;
}
