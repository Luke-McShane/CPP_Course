// Tutorial 22 - Return Values.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>;
#include <string>;
using namespace std;

string userInput() {
	string input;
	cin >> input;
	return input;
}

int main()
{
	cout << "Type something: " << flush;
	cout << "Input: " << userInput() << endl;
    return 0;
}

