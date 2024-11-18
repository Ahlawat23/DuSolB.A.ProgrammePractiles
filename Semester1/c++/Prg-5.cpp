// Program to check the days of the week using if else loop or decision statement.

#include <iostream>
using namespace std;

int main() {
	int day;
	cout << "Enter a number between 1 and 7 to get the corresponding day of the week: ";
	cin >> day;

	if (day == 1) {
		cout << "Sunday";
	} else if (day == 2) {
		cout << "Monday";
	} else if (day == 3) {
		cout << "Tuesday";
	} else if (day == 4) {
		cout << "Wednesday";
	} else if (day == 5) {
		cout << "Thursday";
	} else if (day == 6) {
		cout << "Friday";
	} else if (day == 7) {
	    cout << "Saturday";
    
	} else {
		cout << "Invalid input. Please enter a number between 1 and 7.";
	}
    return 0;
}
