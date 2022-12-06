#include <iostream>
#include "Complex.h"
#include <fstream>
#include <vector>
using namespace std;

vector<double> indexToValue(double yMin, double yMax, double numElements)
{
	vector<double> y;
	for (int x = 0; x < numElements; x++)
	{
		y.push_back((((yMax - yMin) / (numElements - 1)) * x) + yMin);
	}
	return y;
}

int main()
{
	int colNum = 500;
	int rowNum = 500;
	ofstream file;
	ifstream domain;
	file.open("nValues.txt");
	domain.open("domain.txt");
	double realMin, realMax, imagMin, imagMax;
	domain >> realMin; domain >> realMax; domain >> imagMin; domain >> imagMax;
	vector<double> realNums = indexToValue(realMin, realMax, colNum);
	vector<double> imagNums = indexToValue(imagMin, imagMax, rowNum);
	Complex z0;
	Complex z;
	for (int i = 0; i < rowNum; i++)
	{
		for (int j = 0; j < colNum; j++)
		{
			z0 = Complex(realNums[j], imagNums[i]);
			z = z0;
			int n = 0;
			while (z.getMag() <= 2 && n < 2000)
			{
				z = (z * z) + z0;
				n++;
			}
			file << log(log(n + 1)) << " ";
		}
		file << endl;
	}
	file.close();
	domain.close();
}