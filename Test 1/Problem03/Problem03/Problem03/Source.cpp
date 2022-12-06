#include<iostream>
#include "Produce.h"
#include "Fruit.h"
using namespace std;
int main() {
	Fruit orange("Orange", "Florida", 0.45, 9);
	Produce apple("Apple", "California", 0.35);
	double sugars;
	double pounds = 2.5;
	orange.display();
	cout << apple << endl;

	sugars = orange.getTotalSugars(pounds);
	cout << "The sugar content of " << pounds << "lbs of " << orange.getName() << " is: " << sugars << "\n";

	system("pause");
	return 0;
}

