#pragma once

class Point {
	double x, y;
public:
	Point();
	Point(double xVal, double yVal);
	void setValues(double xVal, double yVal);
	double getXvalue();
	double getYvalue();
	void display();
	double dist(Point p);
};
