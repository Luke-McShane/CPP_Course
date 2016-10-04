// Tutorial 33 - Arithmetic.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;

int main()
{
	int seconds = 182312;
	double minutes = (double(seconds) / 60); //Here we cast seconds to a double so we are able to divide to fully and receieve a decimal value as a result.
	double hours = (double(seconds) / 3600);

	cout << "Seconds: " << seconds << endl;
	cout << "Minutes: " << minutes << endl;
	cout << "Hours: " << hours << "\n" << endl;
	cout << "Minutes * 60: " << minutes * 60 << endl;
	cout << "Hours * 3600: " << hours * 3600 << endl;

	for (int i = 0; i < 10000; i++) {
		if (i % 100 == 0)
			cout << i << " " << flush;
	}

    return 0;
}

