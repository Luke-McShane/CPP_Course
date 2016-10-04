// Tutorial 34 - Pointers and Arrays.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;

int main()
{
	string nameArray[] = { "Adam", "John", "Carl", "Mary" };

	//Here we create two pointers: one that points to the memory address of the first element in the array and the second that points to the last element in the array
	string * pNameStart = &nameArray[0];
	string * pNameEnd = &nameArray[(sizeof(nameArray) / sizeof(string)) - 1];

	for (int i = 0; i < sizeof(nameArray) / sizeof(string); i++)
		cout << "Value: " << pNameStart[i] << endl;

	cout << endl;

	//Here you can see we increment both 'i' and 'pNameStart' at the end of each iteration of the for loop by using a comma in the last section of the for loop initialization
	//Note that we can simply increment the pointer and it will automatically point to the next string object in the string array
	for (int i = 0; i < sizeof(nameArray) / sizeof(string); i++, pNameStart++) 
		//Here we print the value by dereferencing the pointer and then the memory address by simply printing the pointer
		cout << "Value: " << *pNameStart << " Address: " << pNameStart << endl;

	//Here we reset the pointer to point to the start of the string array due to the laws of encapsulation
	pNameStart = &nameArray[0];
	cout << endl;

	while (true) {
		cout << *pNameStart << endl;
		if (pNameStart == pNameEnd)
			break;
		pNameStart++;
	}
	

    return 0;
}

