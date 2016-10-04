// Tutorial 35 - Pointer Arithmetic.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;

int main()
{
	const int N_ELEMENTS = 7;
	string myArray[N_ELEMENTS] = { "One", "Two",  "Three", "Four", "Five", "Six", "Seven" };

	string * pStart = myArray;

	//This points to the memory address one memory location (size of a string?) after the array.
	//Dereferencing this is pointless as we are trying to dereference whatever is stored in that memory location, which is not actually in the array
	string * pEnd = &myArray[N_ELEMENTS];
	cout << pEnd << endl;
	//Here we decrement that end-pointer so we are now in fact pointing to the last element in the array
	pEnd--;
	cout << "Value of first element: " << *pStart << " Address of first element: " << pStart << endl;
	cout << "Value of last element: " << *(pEnd) << " Address of last element: " << pEnd << endl;
	cout << endl;
	//Here we increment the end-pointer so it points off the end of the array.
	//This is fine to do as we are not trying to change the value of whatever is stored here or manipulate it in any way, we are simply comparaing it to 'pStart' in each iteration of the loop
	pEnd++;
	while (pStart != pEnd) {
		cout << "Value of current element: " << *pStart << " Address of current element: " << pStart << endl;
		pStart++;
	}
	//Resetting the pStart pointer to point back to the start of the array
	pStart = myArray;

	//This here is interesting as 'pEnd' and 'pStart' are both memory locations, but because they are initialized as pointers, once you subtract one from the other, you arrive at the difference between the memory locations.
	//To expand, the pointer itself points to a memory address, if 'pEnd' points to memory address 17, and 'pStart' points to memory address 10, then subtracting the latter from the former gives us the number of elements in this array.
	//Remember that the pointer itself points to the MEMORY ADDRESS, it's when you DEREFERENCE the pointer that you arrive at the VALUE that is stored in that memory address.
	cout << pEnd << " " << pStart << " " << pEnd - pStart << endl;
	int noElements = pEnd - pStart;
	cout << noElements;
    return 0;
}

