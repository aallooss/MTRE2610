#include "Complex.h"
#include <math.h>

Complex::Complex()
{
	real = 0;
	imag = 0;
}
Complex::Complex(double  r, double i)
{
	real = r;
	imag = i;
}
void Complex::setVals(double  r, double i)
{
	real = r;
	imag = i;
}
double Complex::getReal()
{
	return real;
}
double Complex::getImag()
{
	return imag;
}
double Complex::getMag()
{
	return sqrt((pow(real, 2)) + (pow(imag, 2)));
}
Complex Complex::operator+(Complex c)
{
	return Complex((real + c.real), (imag + c.imag));
}
Complex Complex::operator-(Complex c)
{
	return Complex((real - c.real), (imag - c.imag));
}
Complex Complex::operator*(Complex c)
{
	return Complex((real * c.real - imag * c.imag), (real * c.imag + imag * c.real));
}
Complex Complex::operator/(Complex c)
{
	return Complex(real, imag) * Complex((c.real / ((pow(c.real, 2)) + (pow(c.imag, 2)))), (-1) * (c.imag / ((pow(c.real, 2)) + (pow(c.imag, 2)))));
}

ostream& operator<<(ostream& out, Complex z)
{
	out << z.getReal() << " + " << z.getImag() << "i";
	return out;
}
Complex operator/(double x, Complex z)
{
	return Complex(x * (z.getReal() / ((pow(z.getReal(), 2)) + (pow(z.getImag(), 2)))), x * ((-1) * (z.getImag() / ((pow(z.getReal(), 2)) + (pow(z.getImag(), 2))))));
}