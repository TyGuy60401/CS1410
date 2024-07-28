/*
 * Name: Ty Davis
 * Desc: Programming Lab 3 - Fractions
 * Fractions
 *	
 * Psuedocode for add:
 * using this and other
 * numerator = this.num * other.den + other.num * this.den
 * denominator = this.den * other.den
 * reduce and return
 *
 * Psuedocode for subtract:
 * using this and other
 * multiply other.numerator by zero
 * call the add function
 * return  (don't need to reduce because it is in the add function)
 * 
 * Psuedocode for multiply:
 * using this and other
 * numerator = this.num * other.num
 * denominator = this.den * other.den
 * reduce and return
 *
 * Psuedocode for divide:
 * using this and other
 * if other.num == 0 throw an exception
 * swap other.num and other.den
 * call the multiply function
 * return  (don't need to reduce because it is in the multiply function)
 *
 * Psuedocode for gcd:
 * make sure u and v are both positive
 *
 * (continuously dividing remainder of u & v until it is 0)
 * remainder = u % v
 * while there is still a remainder
	 * u = v
	 * v = remainder
	 * remainder = u % v
 *
 *	
 * ==================================================
 * Test cases are found in the combined notes.md file
 *
 * Integrity Statement:
 *  
 * I certify that this assignment represent my own work.
 * I have not used any unauthorized or unacknoledged assistance
 * or sources in completing it, including free or commercial
 * systems or services offered on the internet or code-generating
 * systems embedded into software.
*/

#include "fraction.h"
#include <iostream>

using namespace std;

long int gcd(long int u, long int v) {
	// making both numbers non-negative
	u = (u < 0) ? -u : u;
	v = (v < 0) ? -v : v;

	// euclids algorithm
	long int r = u % v;
	while (r) {
		u = v;
		v = r;
		r = u % v;
	}

	return v;
}

// private function to reduce the fraction and
// make sure that the numerator is always the negative one
void Fraction::reduce() {
	// find the gcd
	long int common = gcd(numerator, denominator);
	numerator /= common;
	denominator /= common;

	// make sure that numerator is negative, not denominator
	if (denominator < 0) {
		numerator *= -1;
		denominator *= -1;
	}
}

// constructor (defaults provided in the header)
Fraction::Fraction(long int num, long int den): numerator(num), denominator(den) {
	this->reduce();
}

// add by finding the lcd and then reduce
Fraction Fraction::add(Fraction frac) {
	Fraction x(numerator * frac.denominator + frac.numerator * denominator,
			   denominator * frac.denominator);
	x.reduce();
	return x;
	
}

// subtract by adding the negative frac
Fraction Fraction::sub(Fraction frac) {
	frac.numerator *= -1;
	Fraction x = this->add(frac);
	// x.reduce();
	return x;
}

// multiply across then reduce
Fraction Fraction::mult(Fraction frac) {
	Fraction x(numerator * frac.numerator, denominator * frac.denominator);
	x.reduce();
	return x;
}

// divide by multiplying  the reciproval of frac
Fraction Fraction::div(Fraction frac) {
	// test if frac's numerator is zero
	if (frac.numerator == 0) {
		throw frac.numerator;
	}
	// xor swap the numerator and denominator
	Fraction tempFrac = frac;
	tempFrac.numerator   = tempFrac.numerator ^ tempFrac.denominator;
	tempFrac.denominator = tempFrac.numerator ^ tempFrac.denominator;
	tempFrac.numerator   = tempFrac.numerator ^ tempFrac.denominator;

	// multiply the reciprocal
	Fraction x = this->mult(tempFrac);
	return x;
}


// friend functions for arithmetic operators
Fraction operator+ (Fraction lhs, Fraction rhs) { return lhs.add(rhs); }
Fraction operator+ (Fraction lhs, int rhs)      { return lhs.add(Fraction(rhs)); }
Fraction operator+ (int lhs,      Fraction rhs) { return Fraction(lhs).add(rhs); }

Fraction operator- (Fraction lhs, Fraction rhs) { return lhs.sub(rhs); }
Fraction operator- (Fraction lhs, int rhs)      { return lhs.sub(Fraction(rhs)); }
Fraction operator- (int lhs,      Fraction rhs) { return Fraction(lhs).sub(rhs); }

Fraction operator* (Fraction lhs, Fraction rhs) { return lhs.mult(rhs); }
Fraction operator* (Fraction lhs, int rhs)      { return lhs.mult(Fraction(rhs)); }
Fraction operator* (int lhs,      Fraction rhs) { return Fraction(lhs).mult(rhs); }

Fraction operator/ (Fraction lhs, Fraction rhs) { return lhs.div(rhs); }
Fraction operator/ (Fraction lhs, int rhs)      { return lhs.div(Fraction(rhs)); }
Fraction operator/ (int lhs,      Fraction rhs) { return Fraction(lhs).div(rhs); }

ostream& operator<< (ostream& out, Fraction &frac) {
	out << frac.numerator << "/" << frac.denominator;
	return out;
}


void Fraction::print() {
	cout << numerator << "/" << denominator;
}

// void Fraction::read() {
istream& operator>> (istream& in, Fraction &frac) {
	string errString = "Bad input";
	long int num;
	long int den;
	bool valid = true;
	do {
		valid = true;
		try {
			// get the numerator
			cout << "Numerator: ";
			in >> num;
			if (in.fail()) {
				throw errString;
			}
			in.clear();
			in.ignore(10000, '\n');

			// get the denominator
			cout << "Denominator: ";
			in >> den;
			if (in.fail()) {
				throw errString;
			} else if (den == 0) {
				throw den;
			}
			in.clear();
			in.ignore(10000, '\n');

		} catch (long int) {
			cout << "Enter a non-zero number for the denominator." << endl;
			valid = false;
		} catch (string err) {
			cout << "Error: " << err << endl;
			cout << "Enter a valid response" << endl;
			valid = false;
			in.clear();
			in.ignore(10000, '\n');
		}

	} while (!valid);
	frac.numerator = num;
	frac.denominator = den;
	frac.reduce();

	return in;
}



