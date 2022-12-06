#include<iostream>
#include<string>
#include <iomanip>
#include "Produce.h"

using namespace std;

Produce::Produce() {
	// Default values
	name = "No name input";
	origin = "No origin input";
	unitPrice = 0;
};

Produce::Produce(string nameIn, string originIn, double price) {
	// Values passed are stored into data members of Produce
	name = nameIn;
	origin = originIn;
	unitPrice = price;
};

void Produce::setValues(string nameIn, string originIn, double price) {
	// Values passed are stored into data members of Produce
	name = nameIn;
	origin = originIn;
	unitPrice = price;
};

string Produce::getName() {
	return name;
};

string Produce::getOrigin() {
	return origin;
};

double Produce::getUnitPrice() {
	return unitPrice;
};

double Produce::getPrice(double lbs) {
	// Price is the number of pounds times the price per unit
	return unitPrice * lbs;
};

void Produce::display() {
	// Displays the name, origin, and price per unit of Produce
	cout << name << " from " << origin << " costs: " << unitPrice << endl;
};

ostream& operator<<(ostream& out, Produce RHS) {
	// Displays the name, origin, and price per unit of Produce
	return out << RHS.getName() << " from " << RHS.getOrigin() << " costs: " << RHS.getUnitPrice();
};


