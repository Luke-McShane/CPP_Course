// Tutorial 28 - String Streams.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <sstream>
#include <iostream>
using namespace std;

int main()
{
	int age = 11;
	string name = "Geoff";
	float points = 12.2;
	//Here we create a stringstream object called ss.
	//ss is treated as a stream and we can manipulate the stream later on, for example by calling it's function ".str()"
	stringstream ss;
	ss << "Name: " << name << "; Age: " << age << "; Points: " << points;

	string information = ss.str();
	cout << information << endl;
    return 0;
}

