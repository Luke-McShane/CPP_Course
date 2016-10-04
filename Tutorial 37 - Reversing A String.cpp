// Tutorial 37 - Reversing A String.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;

int main()
{
	char charArray[] = "waka pfft";

	//This points to the start of the char array
	char * pStart = charArray;
	//This works out the length of the char array. One is subtracted since we have a NULL terminating character on the end of the array; we do not need this.
	int len = sizeof(charArray) - 1;
	//Since pStart already points to the first character, we want to add the length of the char array then minus one since we are not starting at 0.
	char * pEnd = pStart + len - 1;
	cout << charArray << endl;

	while (pStart < pEnd) {
		char temp = *pStart;
		*pStart = *pEnd;
		*pEnd = temp;

		pStart++;
		pEnd--;
	}

	cout << charArray << endl;
    return 0;
}

