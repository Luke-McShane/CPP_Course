// Tutorial 38 - References.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;

void changeValue(int value) {
	value = 14;
}

void changeValue2(int &value) {
	value = 16;
}

void changeValue3(int *value) {
	*value = 18;
}

int main()
{
	int value = 12;
	changeValue(value);
	cout << "Passing 'value' by value: " << value << endl;

	changeValue2(value);
	cout << "Passing 'value' by reference: " << value << endl;

	int * pValue = &value;
	changeValue3(pValue);
	cout << "First declaring a pointer, then passing 'value''s address through as a pointer, then dereferencing it in the function to alter it: " << value << endl;

	/*
	As you can see, we effectively have the same thing going on in 'changeValue2' and 'changeValue3', the only difference being how we are altering 'value'.
	In changeValue2 we create a synonym of value, meaning a direct reference. So whatever happens to this 'value', happens to the original.
	This effectively means that we don't have to creat a pointer that points to the memory address and then is dereferenced within a function.
	This is what is happenening in changeValue3. 
	*/
    return 0;
}

