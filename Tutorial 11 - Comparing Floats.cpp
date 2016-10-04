// Tutorial 11 - Comparing Floats.cpp : Defines the entry point for the console application.
//
#include "stdafx.h";
#include <iostream>;
#include <string>;

using namespace std;

int main() {
	//Floating-point types cannot be perfectly represented in binary due to rounding errors, forcing truncation.
	//It is therefore unreliable to check if two floating point numbers are exactly equivalent to one another: "==" is not applicable.
	//eg: if(float1 == float2)... This will be false..

	float float1 = 1.11;

	if (float1 < 1.112 && float1 > 1.109) {
		cout << "Equal." << endl;
	}
	else {
		cout << "Not equal." << endl;
	}
	return 0;
}

