// Tutorial 36 - Char Arrays.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	//When we initialize a char array like this, an extra, invisible character is appended to the end of the array to show that it is the end of the array.
	//This is why, when this for loop is run, there is an extra element printed that shows nothing.
	char charArray[] = "hello";
	for (int i = 0; i < sizeof(charArray); i++) {
		cout << "Current element: " << charArray[i] << endl;
	}
	cout << endl;
	int j = 0;
	while (true) {
		//Here we check if the element met is NULL, and, if so, we break out of the while loop.
		if (charArray[j] == NULL)
			break;
		cout << "Current element: " << charArray[j] << endl;
		j++;
	}
    return 0;
}

