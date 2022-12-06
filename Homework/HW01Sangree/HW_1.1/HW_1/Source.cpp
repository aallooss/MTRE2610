#include <iostream>
#include <vector>

using namespace std;

int main() {

	int first = 0;
	int second = 1;
	int next;

	vector<int> fib = {};

	for (int i = 0; i <= 1000; i++) {
		fib.push_back(first);
		next = first + second;
		first = second;
		second = next;
		i++;
		if (first >= 1000) {
			break;
		}
	}
	for (int i = 0; i < fib.size(); i++) {
		cout << fib[i] << endl;
	}

}