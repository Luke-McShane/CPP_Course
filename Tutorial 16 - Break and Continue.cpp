// Tutorial 16 - Break and Continue.cpp : Defines the entry point for the console application.
//

#include "stdafx.h";
#include <iostream>;
#include <string>;
using namespace std;

int main() {
	
	/*
	//BREAK
	'break' breaks out of the loop completely and remainder of the program continues to run.
	Here we would see that, when  i==3, the loop "breaks" and "Program ending.." is output.
	for (int i = 0; i < 5; i++) {

		if (i == 3) {
			break;
		}

		cout << i << ", Looping.." << endl;
	}

	cout << "Program ending.." << endl;
	*/


	/*CONTINUE
	'continue' finishes the current iteration and goes onto the next one.
	Instead of breaking out of the loop, we are just looping into the next loop-iteration when this keyword is run in the program.
	for (int i = 0; i < 5; i++) {

		if (i == 3) {
			continue;
		}

		cout << i << ", Looping.." << endl;
	}

	cout << "Program ending.." << endl;
	*/
	string pass = "password";
	do {
		cout << "Please enter your password: " << flush;
		string userInput;
		cin >> userInput;
		if (userInput == pass) {
			cout << "Great success!" << endl;
			break;
		}
		else {
			cout << "Invalid password.." << endl;
		}
	} while (true);
	
	return 0;
}
