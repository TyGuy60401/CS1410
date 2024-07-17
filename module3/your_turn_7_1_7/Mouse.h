#include <iostream>
#include <string>

class Mouse {
private:
	int age;
	double weight;
	double growthRate;
	std::string expNumber;

public:
	// constructors
	Mouse();
	Mouse(double rate);

	// print functions
	void printMouse();
	void printMouse(std::string name);

	// setters
	void setGrowthRate(double rate);
	void setExpNumber(std::string newNumber);

	// getters
	double getGrowthRate();
	std::string getExpNumber();

	// methods
	void growMouse();
	void growMouse(int numDays);
};
