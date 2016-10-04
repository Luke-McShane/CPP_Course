// Tutorial 10 - If-Else.cpp : Defines the entry point for the console application.
//

#include "stdafx.h";
#include <iostream>;
#include <string>;

using namespace std;

int main() {

	cout << "1. Create new file." << endl;
	cout << "2. Delete selected file." << endl;
	cout << "3. Alter selected file." << endl;
	cout << "4. Manage file directory." << endl;
	cout << "5. Exit program." << endl;
	cout << "Please select an option: " << flush;
	int input;
	cin >> input;

	if (input == 1) {
		cout << "New file created." << endl;
	} 
	else if (input == 2) {
		cout << "Deleting selected file..." << endl;
	}
	else if (input == 3) {
		cout << "Altering selected file..." << endl;
	}
	else if (input == 4) {
		cout << "Managing file directory..." << endl;
	}
	else if (input == 5) {
		cout << "Program shutting down..." << endl;
	}
	else {
		cout << "Invalid input." << endl;
	}

	return 0;
}