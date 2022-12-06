# include <iostream>
# include <vector>
using namespace std;
int main() {
	int num, i;
	vector<double> v1, v2;
	cout << "Enter number of points:" << endl;
	cin >> num;
	cout << endl;
	for (i = 0; i < num; i++)
		v1.push_back(i * (100. - 1) / (num - 1) + 1);
	for (i = 0; i < num; i += 3) {
		v2.push_back(v1[i]);
		cout << v1[i] << endl;
	}
}