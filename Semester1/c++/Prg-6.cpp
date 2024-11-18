// Program to find a sum of positive number using while loop in C++.

#include <iostream>
using namespace std;

int main() {
	int num;
    int sum = 0;

    cout << "Enter a number: ";
    cin >> num;
    while (num > 0) {
        sum += num;
        cout << "Enter another number: ";
        cin >> num;
    }
    cout << "The sum is: " << sum;
    return 0;
}