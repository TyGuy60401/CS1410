#include <iostream>
#include <string>
#include <iomanip>

#include "Mouse.h"


// constructors
Mouse::Mouse() : age(0), weight(1), growthRate(1.5), expNumber("A1") {
	std::cout << "I am being constructed...\n";
}

Mouse::Mouse(double rate) : age(0), weight(1), growthRate(rate), expNumber("A1") {
	std:: cout << "I am being constructed...\n";
}

// print functions
void Mouse::printMouse() {
	std::cout << std::fixed;

	std::cout << "Age: \t\t" << age << std::endl;
	std::cout << "Weight: \t\t" << std::setprecision(5) << weight << std::endl;
	std::cout << "Growth rate: \t\t" << std::setprecision(3) << growthRate << std::endl;
}

void Mouse::printMouse(std::string name) {
	std:: cout << std::fixed;

	std::cout << "Name: \t\t" << name << std::endl;
	std::cout << "Age: \t\t" << age << std::endl;
	std::cout << "Weight: \t\t" << std::setprecision(5) << weight << std::endl;
	std::cout << "Growth rate: \t\t" << std::setprecision(3) << growthRate << std::endl;
}

// setters
void Mouse::setGrowthRate(double rate){ 
	growthRate = rate;
}
void Mouse::setExpNumber(std::string newNumber) {
	expNumber = newNumber;
}

// getters
double Mouse::getGrowthRate() {
	return growthRate;
}
std::string Mouse::getExpNumber() {
	return expNumber;
}

// methods
void Mouse::growMouse() {
	age++;
	weight += growthRate;
}

void Mouse::growMouse(int numDays) {
	for (int i = 0; i < numDays; i++) {
		growMouse();
	}
}
