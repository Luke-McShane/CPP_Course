// Tutorial 8 - Char and Bool.cpp : Defines the entry point for the console application.
//

#include "stdafx.h";
#include <iostream>;

using namespace std;

int main() {
	//True or false, will output as 1 or 0 respectively.
	bool myBool = true;

	//Assigned char a value will assign the char equivalent of that value.
	//22 will therefore be output as "#" since "#" is the Char equivalent of the decimal 22.
	//Check the ASCII table for more translations/interchanges.
	char myChar = 35;
	char myChar2 = '#';

	cout << myChar << endl;
	cout << myChar2 << endl;

	//Here we "cast" the character "#" to it's decimal equivalent.
	//This is implicit conversion.
	cout << int(myChar2) << endl;

	cout << "Size of char: " << sizeof(char) << endl;
	//"wchar_t" is type whose range is greater than a standard char.
	cout << "Size of wchar_t: " << sizeof(wchar_t) << endl;
	return 0;
}