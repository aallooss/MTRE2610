#include <iostream>
#include <fstream>
#include "Complex.h"

using namespace std;

int main() {
	Complex z1(1.4, 2.1), z2(-3.2, 4.6);
	cout << z1 * z2 + z1 / (z2 - z1) << "\n";

	ofstream myfile("BigData.txt");
	const int numRows = 24, numCols = 20;
	Complex z[numRows][numCols];

	for (int row = 0; row < numRows; row++) {
		for (int col = 0; col < numCols; col++) {
			z[row][col].setVals(2.0 / (numCols - 1) * col - 1.5, 2.4 / (numRows - 1) * row - 1.2);
			z[row][col] = z[row][col] * z[row][col] + z[row][col];
			myfile << z[row][col].getMag() << " ";
		}
		myfile << endl;
	}
	myfile.close();
	return 0;
}
