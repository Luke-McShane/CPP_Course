// Tutorial 14 - Do-While.cpp : Defines the entry point for the console application.
//

#include "stdafx.h";
#include <iostream>;
#include <string>;
using namespace std;

/*
We can use the same variable name in a loop as it is in a different scope to variable outside the loop.
This is generally bad practise as it makes the code much more confusing if there are variables in different scopes with different
values but with the same name, just thought it was worth mentioning.
*/

int main() {

	const string password = "password";
	//We declare the variable outside the 'do' statement since it is being accessed in the 'while' statement.
	string userInput;

	do {
		cout << "Please enter your password: " << flush;
		cin >> userInput;
		if (userInput != password) {
			cout << "Access denied" << endl;
		}
	} while (userInput != password);

	cout << "Password accepted" << endl;

	return 0;
}

