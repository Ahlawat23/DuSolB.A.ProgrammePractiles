// Program to display name, roll no. and grade of 3 students who have appeared in exams.
    // Display their result, create an array of class objects and display these contents of array.

#include <iostream>
using namespace std;

struct Student {
	string name;
	int roll_no;
	double grade;
};

int main() {
	Student students[3] = {
		{"Marco", 1, 90.5},
		{"Jake", 2, 85.0},
		{"Steve", 3, 75.0}
	};

	for (int i = 0; i < 3; i++) {
		cout << "Name: " << students[i].name << endl;
		cout << "Roll Number: " << students[i].roll_no << endl;
		cout << "Grade: " << students[i].grade << endl;
		cout << endl;
	}
	return 0;
}
