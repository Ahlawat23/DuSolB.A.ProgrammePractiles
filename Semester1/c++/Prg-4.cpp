// Program to check if the number is even or odd using if else loop or decision statement.

#include <iostream>
using namespace std;

int main() {
	int num;
	cout << "Enter a number: ";
	cin >> num;

	if (num % 2 == 0) {
		cout << "Even";
	} else {
		cout << "Odd";
	}
    return 0;
}
