#include <iostream>

using namespace std;

struct student {
	int credit[100], numCourses;
	char grade[100];
	void setGrades(int creditIn[], char gradeIn[], int numIn) {
		 
		for (int i = 0; i < numIn; i++){
			credit[i] = creditIn[i];
			grade[i] = gradeIn[i];
		}
		numCourses = numIn;
	}
	void addGrade(int creditIn, char gradeIn) {
		credit[numCourses] = creditIn;
		grade[numCourses] = gradeIn;
		numCourses++;
	}
	double getGPA() {
		double gpa = 0, total = 0;

		for (int i = 0; i < numCourses; i++) {

			total += credit[i];

			if (grade[i] == 'A') {
				gpa += credit[i] * 4;
			}
			else if (grade[i] == 'B') {
				gpa += credit[i] * 3;
			}
			else if (grade[i] == 'C') {
				gpa += credit[i] * 2;
			}
			else if (grade[i] == 'D') {
				gpa += credit[i] * 1;
			}
		}
		gpa /= total;
		return gpa;
	}
};

int main() {
	const int numStart = 5;

	int startCredit[numStart] = { 3, 4, 3, 2, 4 };
	char startGrade[numStart] = { 'A', 'A', 'B', 'C', 'B' };

	student me, you;

	me.setGrades(startCredit, startGrade, numStart);
	you.setGrades(startCredit, startGrade, numStart);

	me.addGrade(4, 'C'); me.addGrade(3, 'F');
	you.addGrade(2, 'B'); you.addGrade(4, 'A');

	cout << " I have a " << me.getGPA() << " GPA " << endl;
	cout << "You have a " << you.getGPA() << " GPA" << endl;

	return 0;
}