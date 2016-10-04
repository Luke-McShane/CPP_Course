// Tutorial 20 - Switch.cpp : Defines the entry point for the console application.
//

#include "stdafx.h";
#include <iostream>;
#include <string>;
using namespace std;


int main()
{
	/*
	Here we implement a "switch" statement.
	This is essentially version of "if, if-else, else" but is considered more elegant.
	We use a boolean here because the "break" statement in the "quit" option will only break out of the switch
	statement, so we need something else to break out of the while loop - the boolean expression is ideal in this scenario.
	*/
	bool exitLoop = false;
	int input;
	cout << "MAIN MENU" << endl;
	cout << "1. Write to text file" << endl;
	cout << "2. Read from text file" << endl;
	cout << "3. Open text file location" << endl;
	cout << "4. Exit program" << endl;
	do {
		cout << "Please select an option: " << flush;
		
		cin >> input;

		switch (input) {
		case 1:
			cout << "Writing to text file.." << endl;
			break;
		case 2:
			cout << "Reading from text file.." << endl;
			break;
		case 3:
			cout << "Opening text file location.." << endl;
			break;
		case 4:
			exitLoop = true;
			break;
		default:
			cout << "Invalid input.." << endl;
			break;
		}
	} while (!exitLoop);
    return 0;
}

