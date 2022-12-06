#include <iostream>
#include <vector>
#include "Point.h"
#include "Shape.h"
using namespace std;

Point::Point() {
	x = y = 0;
}
Point::Point(double xVal, double yVal) {
	x = xVal;
	y = yVal;
}
void Point::setValues(double xVal, double yVal) {
	x = xVal;
	y = yVal;
}

double Point::getXvalue() {
	return x;
}

double Point::getYvalue() {
	return y;
}

void Point::display() {
	cout << "<" << x << "," << y << ">" << endl;
}

double Point::dist(Point p) {
	return sqrt(pow(x - p.x, 2) + pow(y - p.y, 2));
}
