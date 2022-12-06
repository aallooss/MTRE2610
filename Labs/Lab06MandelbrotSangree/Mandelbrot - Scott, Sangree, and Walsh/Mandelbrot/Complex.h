#pragma once
#include <iostream>
using namespace std;

class Complex {
	double  real, imag;
public:
	Complex();
	Complex(double  r, double i);
	void    setVals(double  r, double i);
	double  getReal(); // Return real part
	double  getImag(); // Return imaginary part
	double  getMag(); // Return magnitude
	Complex operator+(Complex c); // Add      two complex numbers
	Complex operator-(Complex c); // Subtract two complex numbers
	Complex operator*(Complex c); // Multiply two complex numbers
	Complex operator/(Complex c); // Divide   two complex numbers
};

ostream& operator<<(ostream& out, Complex z); // Write z to the output stream out
Complex operator/(double x, Complex z);    // Return reciprocal of z multiplied by scalar x