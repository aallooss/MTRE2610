#include <iostream>
using namespace std;

class Rational {
private:
	int numer;
	int denom;
public:
	Rational() {
		numer = 0;
		denom = 1;
	};
	Rational(int num, int den) {
		numer = num;
		denom = den;
	};
	Rational operator+(Rational r);
	Rational operator-(Rational r);
	Rational operator*(Rational r);
	Rational operator/(Rational r);
	Rational operator+(int x);
	Rational operator-(int x);
	Rational operator*(int x);
	Rational operator/(int x);
	int getNumer() {
		return numer;
	};
	int getDenom() {
		return denom;
	};
	void reduce();
};

ostream& operator<<(ostream& out, Rational r);