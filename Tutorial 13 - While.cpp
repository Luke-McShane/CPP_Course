// Tutorial 13 - While.cpp : Defines the entry point for the console application.
//

#include "stdafx.h";
#include <iostream>;
#include <string>;

using namespace std;

int main() {

	int i = 1;
	int j = 3;

	while (i <= 3) {
		cout << "Current iteration: " << i << endl;
		i++;
	}

	while (j >= 1) {
		cout << "Marty we're going back in time! " << j << endl;
		j--;
	}

	return 0;
}