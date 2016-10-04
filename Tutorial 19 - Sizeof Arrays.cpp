// Tutorial 19 - Sizeof Arrays.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>;
#include <string>;
using namespace std;

int main()
{
	/*
	Here we show an example of how we use the size of the data type to find out how many iterations are needed to
	fully iterate through all elements of an array using that same data type.
	*/

	int values[] = { 23, 56, 2, 19, 7 };
	
	cout << "Number of bytes assigned for an int: " << sizeof(int) << endl;
	cout << "Number of bytes assigned for this array: " << sizeof(values) << endl;

	for (int i = 0; i < (sizeof(values) / sizeof(int)); i++) {
		cout << values[i] << "\t" << flush;
	}
	cout << "\n" << endl;

	int moreValues[4][3] = { {12, 34, 123},
							 {44, 98, 1},
							 {38, 66, 52},
							 {552, 14, 6} };

	cout << "Number of bytes assigned for an int: " << sizeof(int) << endl;
	cout << "Number of bytes assigned for this 2d-array: " << sizeof(moreValues) << endl;

	for (int i = 0; i < (sizeof(moreValues) / sizeof(moreValues[0])); i++) {
		for (int j = 0; j < (sizeof(moreValues[0]) / sizeof(int)); j++) {
			cout << moreValues[i][j]  << "\t" << flush;
		}
		cout << endl;
	}

    return 0;
}

