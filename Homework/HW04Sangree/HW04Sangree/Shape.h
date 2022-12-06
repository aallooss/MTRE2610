#include "Point.h"
#include <string>
#include <vector>
#pragma once
using namespace std;

class Polygon {
protected:
	vector<Point> order;
	int    numPoints;
	string shapeName;
public:
	Polygon();
	void   setPoints(double x[], double y[], int numP);
	// Writes shapeName and all vertices to the screen	
	void   displayPoints();
	double getPerimeter();

};

class Triangle : public Polygon {
public:
	Triangle(double x1, double y1, double x2, double y2, double x3, double y3);
	Triangle() = default;
	double getArea();
};

class EquilateralTriangle : public Triangle {
public:
	// Displays error if given points do not make equilateral triangle
	EquilateralTriangle(double x1, double y1, double x2, double y2, double x3, double y3);
	//testTriangle(double x1, double y1, double x2, double y2, double x3, double y3);
};

class RightTriangle : public Triangle {
public:
	// Displays error if given points do not make right triangle
	RightTriangle(double x1, double y1, double x2, double y2, double x3, double y3);
};

class Parallelogram : public Polygon {
public:
	// Displays error if given points do not make parallelogram
	Parallelogram(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4);
	Parallelogram() = default;
	double getArea();
};

class Rectangle : public Parallelogram {
public:
	// Displays error if given points do not make rectangle
	Rectangle(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4);
};
