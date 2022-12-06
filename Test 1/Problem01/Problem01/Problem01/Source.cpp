#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
	int num;
	cout << "how many numbers do you want: ";
	cin >> num;
	vector<int> v1, v2;
	srand(time(NULL));

	for (int i = 0; i < num; i++) {
		int temp;
		temp = rand() % 100 + 1;
		v1.push_back(temp);
	}
	cout << "The elements in vector01 are: ";
	for (int i = 0; i < num; i++) {
		cout << v1[i] << " ";
	}
	cout << "\nThe elements in vector01 are: ";

	for (int i = 0; i < num; i++) {
		v2.push_back(v1[i]);
		if (v2[i] % 3 != 0) {
		}
		else {
			cout << v2[i] << " ";
		}
	}
}