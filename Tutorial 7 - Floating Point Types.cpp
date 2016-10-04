// Tutorial 7 - Floating Point Types.cpp : Defines the entry point for the console application.
//

#include "stdafx.h";
#include <iostream>;
#include <string>;
#include <iomanip>;

using namespace std;

int main() {

	float myFloat = 1.235;
	double myDouble = 123.1234512;
	long double myLD = 123.4321354562;

	int floatSize = sizeof(float);
	int doubleSize = sizeof(double);
	int LDSize = sizeof(long double);

	cout << "Number of bytes assigned for float type: " << floatSize << endl;
	cout << "Number of bytes assigned for double type: " << doubleSize << endl;
	cout << "Number of bytes assigned for long double type: " << LDSize << endl;

	//Two different output operators, both outputting numbers in a different format.
	cout << scientific << "\nScientific format example: " << myFloat << endl;
	cout << fixed << "Fixed format example: " << myFloat << endl;

	//"setprecision(n)" sets the decimal precision to be used to floating-point values on output operations where "n" is the set-decimal places.
	cout << setprecision(20) << "\nPrecision of float set to 20: " << myFloat << endl;
	cout << setprecision(20) << "Precision of double set to 20: " << myDouble << endl;
	cout << setprecision(20) << "Precision of long double set to 20: " << myLD << endl;
	return 0;
}

