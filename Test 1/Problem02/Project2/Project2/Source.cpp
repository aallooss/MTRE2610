#include <iostream>
#include "IntPair.h"
using namespace std;
int main() {
	IntPair p1, p3;
	p1.set(1, 1);

	IntPair p2(2, 2);

	p3 = p1 + p2;

	cout << p1 << endl;
	cout << p2 << endl;
	cout << p3 << endl;
}