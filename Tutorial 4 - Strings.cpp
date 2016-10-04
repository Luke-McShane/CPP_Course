// Tutorial 4 - Strings.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	//"text1" is an object.
	//"string" is a class.
	string text1 = "Hello ";
	string text2 = "Rob";
	string text3 = text1 + text2;

	cout << text1 << text2 << endl;
	cout << text3 << flush;

    return 0;
}

