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
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	double width, length;
	bool valid = true;
	cout << "Welcome!" << endl;

	do {

		cout << "Enter a room length and width and I'll give you the area." << endl;
		string errString = "Bad input stream";

		try {
			cout << "Length (0-12 ft): ";
			cin >> length;

			if (!cin) {
				throw errString;
			} else if (length <= 0 || length > 12) {
				throw length;
			}
			
			cout << "Width (0-15 ft): ";
			cin >> width;
			if (!cin) {
				throw errString;
			} else if (width <= 0 || width > 15) {
				throw width;
			}

			valid = true;
			cout << "The entered length was " << length << " ft." << endl;
			cout << "The entered width was " << width << " ft." << endl;
			cout << "The area of the room is " << width * length << " square feet."<< endl;
		}
		catch (string err){
			cin.clear();
			cin.ignore(INT_MAX, '\n');

			cout << "Error: " << err << endl << endl;
			valid = false;
		}
		catch (double err) {
			cout << "Error with input number: " << err << endl << endl;
			valid = false;
		}
	} while (!valid);

	return 0;
}
