// put your definitions here
#include "hw06_lib.h"
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

void printResistor(struct Resistor *res) {
	printf("%s\t%s\t%s\t%.2e\n", res->name, res->node_p, res->node_n, res->res_val);	
}

float iR(struct Resistor *res, float v) {
	double current = v / res->res_val;
	return current;
}


bool decodeValue(double *value, const char *str) {
	float val;
	char suffixStr[50];
	int mult;
	if (sscanf(str, "%f%s", &val, suffixStr) == 1) {
		suffixStr[0] = 'l';
		suffixStr[1] = '\0';
	}
	char suffStrLow[50];
	char suffixLow;
	for (int i = 0; i < strlen(suffixStr); i++) {
		suffStrLow[i] = tolower(suffixStr[i]);
	}
	if (strlen(suffixStr) > 1) {
		if (suffStrLow[0] == 'm' && suffStrLow[1] == 'e') {
			suffixLow = 'x';
		} else {
			suffixLow = suffStrLow[0];
		}
	} else {
		suffixLow = suffStrLow[0];
	}
	switch (suffixLow) {
		case 't':
			mult = 12;
			break;
		case 'g':
			mult = 9;
			break;
		case 'x':
			mult = 6;
			break;
		case 'k':
			mult = 3;
			break;
		case 'l':
			mult = 0;
			break;
		case 'm':
			mult = -3;
			break;
		case 'u':
			mult = -6;
			break;
		case 'n':
			mult = -9;
			break;
		case 'p':
			mult = -12;
			break;
		case 'f':
			mult = -15;
			break;
		case 'a':
			mult = -18;
			break;
		case '\0':
			mult = 0;
			break;
		default:
			return false;
			break;
	}
	*value = val * pow(10, mult);
	return true;
}


bool readResistor(struct Resistor *res, const char *str) {
	char name_str[10], node_p_str[10], node_n_str[10], val_str[10];
	if (sscanf(str, "%s %s %s %s", name_str, node_p_str, node_n_str, val_str) != 4) {
		return false;
	}
	double value;

	if (name_str[0] != 'R' && name_str[0] != 'r') {
		return false;
	}


	if (decodeValue(&value, val_str) == false) {
//		fprintf(stderr, "Failure to decode resistor string\n");
		return false;
	}
	strcpy(res->name,name_str);
	strcpy(res->node_p,node_p_str);
	strcpy(res->node_n,node_n_str);
	res->res_val = value;

	return true;
}

