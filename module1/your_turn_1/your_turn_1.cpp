/*
 * Name: Ty Davis
 * Desc: Your turn 1
 *	 Program to calculate the purchase price of a car. 
 *
 *
 * Pseudo code:
 * Request input from user.
 * Store input into variables.
 * Check user input for errors.
 * Repeat input to user.
 * Calculate final cost of car.
 * Print final cost of car to the user.
*/
#include <iostream>
using namespace std;

int main() {
	// Declare all of the necessary variables
	float basePrice;
	float optionsPrice;
	float salesTax;
	float licensingFees;
	float totalPrice;

	// get the input from the user
	cout << "Enter the four values of the car price in this order:\nBase price\nAdditional price for options\nSales tax\nLicensing Fees\n>> ";
	cin >> basePrice >> optionsPrice >> salesTax >> licensingFees;

	// print out the values to the user to confirm the input
	cout.precision(2);
	cout << "The base price of the car is:       $" << fixed << basePrice << endl;
	cout << "The price of additional options is: $" << fixed << optionsPrice << endl;
	cout << "The sales tax price is:             $" << fixed << salesTax << endl;
	cout << "The price of licensing fees is:     $" << fixed << licensingFees << endl<< endl;

	// calculate and print out the final value of the car
	totalPrice = basePrice + optionsPrice + salesTax + licensingFees;
	cout << "The total price of the car is:      $" << fixed << totalPrice << endl;

	return 0;
}
