/*
 * Name: Ty Davis
 * Desc: Your turn 3
 * Calculate the number of years to reach $50000 
 * from a user-given initial investment at 
 * 3.5% interest compounded annually.
 *     
 *
 * Pseudocode:
 *	Welcome statement.
 *	Prompt user for initial investment
 *	Validate user input (positive number less than 50k)
 *	Initialize variable count
 *	While (investment < 50000)
 *		investment *= 1.035
 *		count ++
 *	Print out the relevant information (final amount and number of years to reach 50k)
 *	Graceful close
 *
 *  Integrity Statement:
 *  
 *  I certify that this assignment represent my own work.
 *  I have not used any unauthorized or unacknoledged assistance
 *  or sources in completing it, including free or commercial
 *  systems or services offered on the internet or code-generating
 *  systems embedded into software.
*/
#include <iomanip>
#include <ios>
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	double investment;
	unsigned int count = 0;
	cout << "Welcome. Enter an initial investment amount. Must be a positive number below 50,000." << endl;
	cout << ">> ";
	cin >> investment;

	if (investment <= 0 || investment >= 50000) {
		cout << "You didn't enter an appropriate number." << endl << "Restart the program and try again." << endl;
		return -1;
	}

	cout << investment << endl;

	while (investment < 50000) {
		investment *= 1.035;
		count ++;
	}
	cout.precision(2);
	cout << fixed;
	cout << "Your final return was $" << investment << " after " << count << " years." << endl;
	return 0;
}
