// Tutoral 17 - Arrays.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>;
#include <string>;
using namespace std;

int main()
{
	/*Here we create a two-dimensional array.
	With arrays, we can actually print out and set values to parts of the array that don't actually exist.
	For example:
	cout << timeTables[14][123] << endl;
	would actually print something, but it would be crap and would be something from the computer's memory location that hasn't been assigned in this program.
	Just don't do that.
	*/

	int timesTables[12][12];

	for (int i = 0; i <= 11; i++) {
		for (int j = 0; j <= 11; j++) {
			timesTables[i][j] = (j+1)*(i+1);
		}
	}

	
	for (int val = 0; val <= 11; val++) {
		cout << "Here is the " << val+1 <<  " times table\n--------------------------" << endl;
		for (int val2 = 0; val2 <= 11; val2++) {
			cout << val + 1 << " * " << val2 + 1 << " = " << (val + 1)*(val2 + 1) << endl;
		}
		cout << endl;
	}
    return 0;
}

