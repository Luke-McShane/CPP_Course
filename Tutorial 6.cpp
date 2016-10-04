// Tutorial 6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h";
#include <iostream>;
#include <string>;
#include <limits>;

using namespace std;

int main() {

	//These outputs ("INT_MAX etc..) show the largest and smalled output for each of these three number data-types.
	//The positive output is of course one small since we must account "0" as an output.
	//"long" is of course used when longer numbers are necessary.
	//"short" may be used when space efficiency is a priority and small numbers are being handled.
	cout << "Max int value: " << INT_MAX << endl;
	cout << "Min int value: " << INT_MIN << endl;

	cout << "Max short value: " << SHRT_MAX << endl;
	cout << "Min short value: " << SHRT_MIN << endl;

	cout << "Max long value: " << LLONG_MAX << endl;
	cout << "Min long value: " << LLONG_MAX << endl;

	short shortVal = 32000;
	cout << shortVal << endl;

	long longVal = 1234142523;
	cout << longVal << endl;

	//"sizeof" is an operator that returns the size of the type or expression in bytes.
	//Syntax:
	//sizeof ( type )  <-- the example below uses this as we are passing through the int type.
	//sizeof expression.
	cout << "Size of int: " << sizeof(int) << endl;
	//This outputs "4", meaning the size of an int type is 4 bytes long, or 32 bits long.
	//This means we can assign a number up to 2^(32-1) to the int type (it's "32-1" as we must account for both positive and negative numbers).

	//Unsigned data types MUST be positive, the range of values remains unchanged, therefore we can double the range of values we may use positively but we cannot
	//assign any negatives values to the variable.
	//For example, for "int"s, the postivie range is now 2^32, not 2^31.
	unsigned int myUnsigned = 23123123;
	cout << "Unsigned integer: " << myUnsigned << endl;
	return 0;
}
