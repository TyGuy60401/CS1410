/*
 * Name: Ty Davis
 * Desc: Your turn 6.14 - Enums
 * Create a struct called Friend with 4 member variables
 * and include the structs in an enumeration.
 *
 * Pseudocode:
 * Declare struct Friend
	 * Age
	 * Name
	 * Birth month
	 * Birth date
 * Input for the first friend
 * Input for the second friend
 * Output for the first friend
 * Output for the second friend
 * 
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
using namespace std;

enum birthMonth {JAN = 1, FEB, MAR, APR, MAY,
				 JUN, JUL, AUG, SEP, OCT, NOV, DEC};

string MONTH_NAMES[] = {
			"January",
			"February",
			"March",
			"April",
			"May",
			"June",
			"July",
			"August",
			"September",
			"October",
			"November",
			"December",
};

struct Friend {
	string name;
	int age;
	int birthDate;
	int birthMonth;
};

int get_positive_number(int maxNum) {
	string errorMessage = "Please input a positive number between 1 and " + to_string(maxNum) + ": ";
	int tempVal;
	while (true) {
		cin >> tempVal;
		if (cin.fail() || tempVal > maxNum || tempVal < 1) {
			cout << errorMessage;
			cin.clear();
			cin.ignore(10000, '\n');
			continue;
		}
		break;
	};
	return tempVal;

}

void get_friend_info(Friend& myFriend) {
	bool valid = true;
	cout << "First Name: ";
	cin >> myFriend.name;
	cout << "Age: ";
	myFriend.age = get_positive_number(120);

	cout << "Birth date (1-31): ";
	myFriend.birthDate = get_positive_number(31);
	cout << "Birth month (1-12): ";
	myFriend.birthMonth = get_positive_number(12);
}

void print_friend_info(Friend& myFriend) {
	string monthName = MONTH_NAMES[myFriend.birthMonth - 1];
	cout << "Their first name is " << myFriend.name;
	cout << " and they are " << myFriend.age << " years old. ";
	cout << "Their birthday is on " << monthName << " " << myFriend.birthDate << "." << endl;
	if (myFriend.birthMonth == JUN) {
		cout << "No way! My birthday is in June too!" << endl;
	}

}

int main() {
	// Declaring variables
	Friend friend1;
	Friend friend2;

	cout << "Welcome to the friend tracker 3000, today you are going to be providing the information for two of your friends." << endl;
	cout << "First input their first name, then their age, then their birthday (1-31), and then their birth month." << endl;
	cout << "For the first friend:" << endl;
	get_friend_info(friend1);
	cout << "For the second friend:" << endl;
	get_friend_info(friend2);

	print_friend_info(friend1);
	print_friend_info(friend2);

	cout << "Thanks for using the friend tracker 3000. Have a nice day!" << endl;
}
