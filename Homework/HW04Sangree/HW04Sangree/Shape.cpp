#include <iostream>
#include <cmath>
#include <vector>
#include "Point.h"
#include "Shape.h"
using namespace std;

Polygon::Polygon() {

};
void Polygon::setPoints(double x[], double y[], int numP) {
	numPoints = numP;
	for (int i = 0; i < numPoints; i++) {
		Point obj(x[i], y[i]);
		order[i] = obj;
	}
};
void Polygon::displayPoints() {                 
	for (int i = 0; i < numPoints; i++) {
		order[i].display();
	}
};

double Polygon::getPerimeter() {
	double peri;
	if (numPoints < 3) {
		peri = order[0].dist(order[1]) + order[1].dist(order[2]) + order[2].dist(order[0]);
	}
	else {
		peri = order[0].dist(order[1]) + order[1].dist(order[2]) + order[2].dist(order[3]) + order[3].dist(order[0]);
	}
	return peri;
};


Triangle::Triangle(double x1, double y1, double x2, double y2, double x3, double y3) {
	double x[3] = {x1,x2,x3};
	double y[3] = {y1,y2,y3};
	setPoints(x, y, 3);

};
double Triangle::getArea() {
	double area, base,height;
	base = order[2].dist(order[0]);
	height = order[1].getYvalue();
	area = ((base) * (height))/2;
	return area;
};

EquilateralTriangle::EquilateralTriangle(double x1, double y1, double x2, double y2, double x3, double y3) : Triangle(x1, y1, x2, y2, x3, y3){
	if ((ceil(order[0].dist(order[1]) * 100)) == (ceil(order[1].dist(order[2]) * 100)) && ((ceil(order[1].dist(order[2]) * 100)) == (ceil(order[2].dist(order[0]) * 100)))){
		cout << "Points of an equilateral triangle\n";
	}
	else {
		cout << "Triangle is not equilateral\n";
	}
}
RightTriangle::RightTriangle(double x1, double y1, double x2, double y2, double x3, double y3) : Triangle(x1, y1, x2, y2, x3, y3) {
	if (order[1].dist(order[2]) == sqrt(pow(order[0].dist(order[1]), 2) + pow(order[2].dist(order[0]), 2))) {
		cout << "Points for a right Triangle:\n";
	}
	else {
		cout << "Triangle is not right\n";
	}
};




Parallelogram::Parallelogram(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4){
	double x[4] = { x1,x2,x3,x4 };
	double y[4] = { y1,y2,y3,y4 };
	setPoints(x, y, 4);
	double angle1, angle2;
	angle1 = atan((order[2].getYvalue())/(order[2].dist(order[3])));
	angle2 = atan((order[2].getYvalue()) / (order[0].dist(order[1])));
	if (angle1 == angle2) {
		cout << "Points for parallelogram:\n";
	}
	else {
		cout << "Opposite sides are not parallel\n";
	}
};
double Parallelogram::getArea() {
	Point drip;
	double area, base, height;
	base = order[3].dist(order[0]);
	height = order[1].getYvalue();
	area = ((base) * (height));
	return area;
};
Rectangle::Rectangle(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4) {
	double x[4] = { x1,x2,x3,x4 };
	double y[4] = { y1,y2,y3,y4 };
	setPoints(x, y, 4);
	double angle1, angle2, angle1a, angle2a;
	angle1 = nearbyint(atan((order[0].dist(order[2]) / (order[3].dist(order[0]))))*100);
	angle2 = nearbyint(atan((order[1].dist(order[3]) / (order[0].dist(order[3]))))*100);

	angle1a = atan((order[2].getYvalue()) / (order[2].dist(order[3])));
	angle2a = atan((order[2].getYvalue()) / (order[0].dist(order[1])));
	if (angle1 == angle2) {
		cout << "Points for Rectangle:\n";
	}
	else if(angle1a == angle2a){
		cout << "Angles not right\n";
	}
	else {
		cout << "Opposite sides are not parallel\n";
	}
};