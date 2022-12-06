#pragma once
#include <iostream>
#include <string>

using namespace std;

class Produce {
protected:
	string name, origin;
	double unitPrice;
public:
	Produce();
	Produce(string nameIn, string originIn, double price);
	void setValues(string nameIn, string originIn, double price);
	string getName();
	string getOrigin();
	double getUnitPrice();
	double getPrice(double lbs);
	void display();
};

ostream& operator<<(ostream& out, Produce RHS);
