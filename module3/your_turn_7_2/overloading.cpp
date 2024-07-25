/* 
 * Name: Ty Davis
 * Desc: Your turn 7.2 - Overloading practice
 * Using a Distance class to test overloading constructors
 * and operators.
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

class Distance {
private:
	int feet;
	float inches;

public:
	// constructors
	Distance() : feet(0), inches(0.0) {}

	Distance(int ft, float in) : feet(ft), inches(in) {}

	// destructor
	// ~Distance() { cout << "Distance object destructed"; }
	
	// display distances
	void Display() {
		cout << feet << "\'-" << inches << "\"" << endl;
	}
	
	// getters for feet and inches
	int getFeet() { return feet; }
	int getInches() { return inches; }

	// setters for feet and inches
	void setFeet(int ft=0) { feet = ft; }
	void setInches(float in=0) { inches = in; }
	
	// overload the + sign
	Distance operator+ (Distance d1);
	
	// overload the < sign
	bool operator< (Distance dist1);

	// overload the == sign
	bool operator== (Distance dist1);
	
	// overload the insertion operator (<<) - using a friend function
	friend ostream& operator<< (ostream& out, Distance &dist1);
	
	// overload the extraction operator (>>) - using a friend function
	friend istream& operator>> (istream& in, Distance &dist1);
};


Distance Distance::operator+ (Distance dist1) {
	int ft = feet + dist1.feet;
	float in = inches + dist1.inches;

	while (in >= 12) {
		in -= 12;
		ft++;
	}

	return Distance(ft, in);
}

bool Distance::operator< (Distance dist1) {
	float thisLength = feet + (inches / 12);
	float parmLength = dist1.feet + (dist1.inches / 12);

	return (thisLength < parmLength) ? true: false;
}


bool Distance::operator== (Distance dist1) {
	// get the lhs total length
	float thisLength = feet + (inches / 12);
	// get the rhs total length
	float parmLength = dist1.feet + (dist1.inches / 12);

	// compare the lengths
	return (thisLength == parmLength);
}


ostream& operator<< (ostream& out, Distance& dist1) {
	out << dist1.feet << "\'-" << dist1.inches << "\"" << endl;
	return out;
}

istream& operator>> (istream& in, Distance& dist1) {
	cout << "Enter feet: ";
	in >> dist1.feet;

	cout << "Enter inches: ";
	in >> dist1.inches;

	return in;
}

void testEqual(Distance d1, Distance d2) {
	cout << d1;
	cout << d2;

	if (d1 == d2) {
		cout << "Equal" << endl;
	} else {
		cout << "Not equal" << endl;
	}
	cout << endl;
}


int main() {
	cout << "\nWe are overloading operators \n\n";
	Distance d1;
	Distance d2;
	testEqual(d1, d2);

	d1.setFeet(12);
	d1.setInches(6.5);
	d2.setFeet();
	d2.setInches();
	testEqual(d1, d2);

	d1.setFeet(12);
	d1.setInches(6.5);
	d2.setFeet(12);
	d2.setInches(6.5);
	testEqual(d1, d2);

	d1.setFeet(12);
	d1.setInches(6.5);
	d2.setFeet(13);
	d2.setInches(-5.5);
	testEqual(d1, d2);

	d1.setFeet(12);
	d1.setInches(6.5);
	d2.setFeet();
	d2.setInches(150.5);
	testEqual(d1, d2);

	d1.setFeet(12);
	d1.setInches(6.5);
	d2.setFeet(13);
	d2.setInches(-5.1);
	testEqual(d1, d2);

	d1.setFeet(12);
	d1.setInches(6.5);
	d2.setFeet(12);
	d2.setInches(6.5);
	testEqual(d1, d2);

	d1.setFeet(-6);
	d1.setInches();
	d2.setFeet(6);
	d2.setInches();
	testEqual(d1, d2);
}
