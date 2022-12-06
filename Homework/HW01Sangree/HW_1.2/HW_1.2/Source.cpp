#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main() {
	
	double radi;
	int L = 28;

	ifstream inData("HW01data.txt");

	float o1, o2;

	vector<double> w1 = {};
	vector<double> w2 = {};
	vector<double> R = {};

	while (!inData.eof()) {
		inData >> o1 >> o2;

		w1.push_back(o1);
		w2.push_back(o2);

		radi = (L*o1 + L*o2) / (2*o2 - 2*o1);

		R.push_back(radi);
	}
	for (int i = 0; i < R.size(); i++) {
		cout << R[i] << " cm" << endl;
	}
	inData.close();
	return 0;
}
