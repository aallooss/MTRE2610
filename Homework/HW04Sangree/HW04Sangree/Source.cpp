#include <iostream>
#include <vector>
#include "Point.h"
#include "Shape.h"
using namespace std;

int main() {
	EquilateralTriangle	tri1(0, 0, 0.5, 0.5, 1, 0),
		tri2(0, 0, 0.5, 0.8660254, 1, 0);
	tri2.displayPoints();
	cout << "P = " << tri2.getPerimeter() << endl;
	cout << "A = " << tri2.getArea() << endl << endl;


	RightTriangle	right1(0, 0, 1, 1, 3, 0),
		right2(0, 0, 0, 1, 3, 0.5),
		right3(0, 0, 0, 1, 3, 0);
	right3.displayPoints();
	cout << "P = " << right3.getPerimeter() << endl;
	cout << "A = " << right3.getArea() << endl << endl;

	Parallelogram 	par1(1, 0, 2.1, 1, 4, 1, 3, 0),
		par2(1, 0, 2, 1, 3.8, 1, 3, 0),
		par3(1, 0, 2, 1, 4, 1, 3, 0);
	par3.displayPoints();
	cout << "P = " << par3.getPerimeter() << endl;
	cout << "A = " << par3.getArea() << endl << endl;

	Rectangle	rect1(1, 0, 2, 1, 4, 1, 3, 0),
		rect2(1, 0, 2.1, 1, 4, 1, 3, 0),
		rect3(0, 0, 0, 3, 4, 3, 4, 0);
	rect3.displayPoints();
	cout << "P = " << rect3.getPerimeter() << endl;
	cout << "A = " << rect3.getArea() << endl;
	return 0;
}