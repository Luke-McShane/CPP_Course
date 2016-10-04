// Tutorial 9 - If.cpp : Defines the entry point for the console application.
//

#include "stdafx.h";
#include <iostream>;
#include <string>;

using namespace std;

int main() {
	string password = "hello";
	int level2Pass = 4;

	cout << "Please enter your password -> " << flush;

	string input;
	cin >> input;

	cout << "Your password attempt: " << "'" << input << "'" << endl;

	if (input == password) {
		cout << "Password accepted!" << endl;
		cout << "You have progressed to level 2!";
		cout << "Guess the number - it's between 3 and 6 -> " << flush;

		int decimalInput;
		cin >> decimalInput;

		if (decimalInput == level2Pass) {
			cout << "Congratulations, you have entered! Now piss off!" << endl;
		}
		else {
			cout << "Incorrect! So close, yet so far!" << endl;
		}
	}

	else {
		cout << "Password denied!" << endl;
	}

	return 0;
}
