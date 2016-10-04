// Tutorial 32 - Pointers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;

void manipulateValueAtAddress(double *value) {
	cout << "Memory address of 'dValue': " << value << endl;
	cout << "Value of dValue' accessed by de-referencing pointer: " << *value << endl;
	*value = 13.5;
	cout << "Value of 'dValue' has been altered by de-referencing pointer and assigning new value: " << *value << endl;
}

int main()
{
	int value = 9;
	int *pvalue = &value;

	cout << "Value of 'value': " << value << endl;
	cout << "Memory address of 'value': " << pvalue << endl;
	cout << "Value of 'value' accessed by de-referencing pointer: " << *pvalue << endl;

	cout << endl;

	double dValue = 12.1;
	cout << "Value of 'dValue': " << dValue << endl;
	manipulateValueAtAddress(&dValue);
	cout << "Value of 'dValue' after being passed through function: " << dValue << endl;

    return 0;
}

