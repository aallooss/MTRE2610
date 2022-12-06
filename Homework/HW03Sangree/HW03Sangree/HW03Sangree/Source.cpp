#include "Rational.h"
#include <iostream>
using namespace std;

int main() {

	Rational a(1, 2), b(5, 2), c(1, 4), d(5, 3), e(3, 2);
	cout << (a + 1) + b * (c - 2) * 3 - d / e / 2;
	return 0;
}