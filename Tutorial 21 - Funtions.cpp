// Tutorial 21 - Funtions.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>;
#include <string>;
using namespace std;

/*
Wahey!
My first not-using-completely-basic-C++-stuff program!
Here we access the "pair" class from the standard library so we are able to set and return multiple values from a function.
If there were more values to be sent/returned, we would use a tuple instead.
*/

int addition(int a, int b) {
	return (a + b);
}

std::pair<int, int> getValues() {
	cout << "Howdy, this is a basic addition program." << endl;
	cout << "Please enter 2 values to continue.." << endl;
	cout << "Value 1: " << flush;
	int val1;
	cin >> val1;
	cout << "Value 2: " << flush;
	int val2;
	cin >> val2;
	return std::make_pair(val1, val2);
}

int main()
{
	std::pair<int, int> userValues = getValues();
	cout << "Equation: " << userValues.first << " + " << userValues.second << " = " << addition(userValues.first, userValues.second) << endl;
    return 0;
}

