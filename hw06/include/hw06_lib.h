#ifndef __HW06_LIB_H
#define __HW06_LIB_H

// put your declarations here
#define MAX_STR_LEN 80
#include <stdbool.h>

struct Resistor {
	char name[MAX_STR_LEN]; // name of resistor
	char node_p[MAX_STR_LEN]; // positive node name
	char node_n[MAX_STR_LEN]; // negative node name
	double res_val; // resistance in ohms
};

/** Prints the info about the resistor */
void printResistor(struct Resistor *res);

/** Returns the current through the resistor for
 * given voltage */
float iR(struct Resistor *res, float v);

/** Reads from spice netlist and returns true or
 * false if successful. Info about resistor assigned 
 * to 'res'. */
bool readResistor(struct Resistor *res, const char *str);

/** Stores value of string to value after decoding from
 * string with suffix such as '1.2k'
 * returns true if successful.  */
bool decodeValue(double *value, const char *str);


#endif
