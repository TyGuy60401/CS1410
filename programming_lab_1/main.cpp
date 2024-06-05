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
 *		Prompt the user for input stored as size
 *		validate the input
 *		throw any errors if necessary
 *		If nothing is bad, display the tree.
 *		Displaying the tree:
 *			size = user input
 *			level = 0
 *			while size - level > 0: // drawing the cone
 *				print '	' size times
 *				print '/'
 *				print ' ' size * 2 times
 *				print '\'
 *			print '-' size * 2 times // drawing the bottom of the cone
 *			print '     ||' size / 2 times
 *			
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
#include <climits>
using namespace std;

int main() {
	unsigned int size;
	unsigned int level = 0;
	int i;
	bool valid = true;
	cout << "Welcome!" << endl;

	do {
		cout << "Enter the size of the Christmas tree (3-15): ";
		string errString = "Input could not be processed as a number.";

		try {
			valid = true;

			cin >> size;

			if (!cin) {
				throw errString;
			} else if (size < 3 || size > 15) {
				throw size;
			}

			// nothing thrown, let's draw the tree
			while (size - level > 0) { // drawing the cone
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
			for (i = 0; i < size * 2; i++) { // drawing the line underneath the cone
				cout << "-";
			}
			cout << endl;

			for (i = 0; i < size / 2; i++) { // drawing the trunk
				int j;
				for (j = 0; j < size - 1; j++) { // spacing the trunk
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
