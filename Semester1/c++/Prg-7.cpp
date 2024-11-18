// Program to find sum of numbers until the user enters 0. Use the do while loop.

#include <iostream>
using namespace std;

int main() {
	int num = 1, sum = 0;
	do {
		cout << "Enter number: ";
		cin >> num;
		if (num > 0) {
			sum += num;
		} else if (num == 0) {
			break;
		} else {
			cout << "Invalid input. Enter a positive number or 0 to exit.";
		} 
	} while (true);
	cout << "The sum is: " << sum;
    return 0;
} 
