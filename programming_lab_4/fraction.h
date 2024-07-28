long int gcd(long int u, long int v);

class Fraction {
private:
	// variables
	long int numerator;
	long int denominator;

	// one private function
	void reduce();
public:
	// public functions
	Fraction(long int num = 0, long int den = 1);
	Fraction add(Fraction frac);
	Fraction sub(Fraction frac);
	Fraction mult(Fraction frac);
	Fraction div(Fraction frac);
	void print();
	void read();
	
	// friend functions for arithmetic operators
	friend Fraction operator+ (Fraction lhs, Fraction rhs);
	friend Fraction operator+ (Fraction lhs, int rhs);
	friend Fraction operator+ (int lhs,      Fraction rhs);

	friend Fraction operator- (Fraction lhs, Fraction rhs);
	friend Fraction operator- (Fraction lhs, int rhs);
	friend Fraction operator- (int lhs,      Fraction rhs);

	friend Fraction operator* (Fraction lhs, Fraction rhs);
	friend Fraction operator* (Fraction lhs, int rhs);
	friend Fraction operator* (int lhs,      Fraction rhs);

	friend Fraction operator/ (Fraction lhs, Fraction rhs);
	friend Fraction operator/ (Fraction lhs, int rhs);
	friend Fraction operator/ (int lhs,      Fraction rhs);
};

