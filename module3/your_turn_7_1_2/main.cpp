/*
 * Name: Ty Davis
 * Desc: Your turn 7.1.2 - Vehicle
 * Initializing classes with variables and overloading the initialization functions
 *
 *
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


class Vehicle {
private:
	// vars
	string make, model, year, color;
	float odometer;
	bool accident;
	int numAccidents;

public:
	// functions
	// set the variables to default values
	void initialize();
	void initialize(string make, string model, string year, string color, float odometer);
	void initialize(string make, string model, string year, string color, float odometer, bool accident, int numAccidents);

	// increase the odometer
	void drive(float miles);

	// display the vehicle
	void printVehicle();
};

// void Vehicle::initialize(string make, string model, string year, string color, float odometer) {
void Vehicle::initialize() {
	make = "Subaru";
	model = "Outback";
	year = "1999";
	color = "white and gold";
	odometer = 200000;
	accident = false;
	numAccidents = 0;
}

void Vehicle::initialize(string make, string model, string year, string color, float odometer) {
	this->make = make;
	this->model = model;
	this->year = year;
	this->color = color;
	this->odometer = odometer;
	this->accident = false; // new variable with default value
	this->numAccidents = 0; // new variable with default value
}

// overloading the initialize function
void Vehicle::initialize(string make, string model, string year, string color, float odometer, bool accident, int numAccidents) {
	this->make = make;
	this->model = model;
	this->year = year;
	this->color = color;
	this->odometer = odometer;
	this->accident = accident; // new variable
	this->numAccidents = numAccidents; // new variable
}

// add miles to odometer
void Vehicle::drive(float miles) {
	if (miles >= 0) {
		odometer += miles;
	}
}

// 1999 White and Gold Subaru Outback - 200000 miles
void Vehicle::printVehicle() {
	cout << year << " " << color << " " << make << " " << model << " - " << odometer << " miles\n";
	if (accident) {
		cout << "The car has been in " << numAccidents << " accident";
		if (numAccidents > 1) { // checking if multiple for grammar purposes
			cout << "s";
		}
		cout << endl;
	}
}


int main() {
	// instantiate some class objects
	Vehicle myCar, yourCar, nascar, oneAccidentCar;

	// my car initialized without any variables specified
	myCar.initialize();
	myCar.printVehicle();

	// your car initialized without specifiying accidents
	yourCar.initialize("Nissan", "Sentra", "2025", "Fire engine red", 12);
	yourCar.drive(1200);
	yourCar.printVehicle();

	// nascar initialized with accidents specified
	// (lots of accidnents because its's a nascar)
	nascar.initialize("Nascar", "Race car", "2020", "Blue", 55000, true, 16);
	nascar.printVehicle();

	// testing with a car that has just one accident
	oneAccidentCar.initialize("Honda", "Accord", "2015", "White", 92000, true, 1);
	oneAccidentCar.printVehicle();
}
