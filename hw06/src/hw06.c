// use the libraries here
#include <stdio.h>
#include "hw06_lib.h"
#include <string.h>
#include <stdbool.h>

int main(void) {
	struct Resistor r1;
	
	printf("Enter a resistor: ");
	char resistorString[50];
	fgets(resistorString, sizeof(resistorString), stdin);
	if (readResistor(&r1, resistorString) == false)	{
		fprintf(stderr, "Couldn't scan input string\n");
		return -1;
	}
	printResistor(&r1);
	
	char voltageString[15];
	printf("Enter a voltage: ");
	scanf("%s", voltageString);
	double v;
	if (decodeValue(&v, voltageString) == false) {
		fprintf(stderr, "Invalid value\n");
		return -1;
	}
	 
	double currI1 = iR(&r1, v);
	printf("I = %.2e\n", currI1);
	
	char valueStr[10];
	double value;
	/*
	printf("Enter a value with suffix: ");
	scanf("%s", valueStr);
	if (decodeValue(&value, valueStr) != false) {
		printf("%.2e\n", value);
	} else {
		fprintf(stderr, "Failure to decode resistor string\n");
	}
	*/

	return 0;
}
