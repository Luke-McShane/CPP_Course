// Tutorial 18 - Multidimensional Arrays.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>;
#include <string>;
using namespace std;


int main()
{
	string metal[2][3] = {
		"Slayer", "Anthrax", "Megadeth",
		"Death", "Carcass", "Obituary"
	};

	for (int i = 0; i<2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << "Row: " << i + 1 << "\nColumn: " << j + 1 << "\nData: " << metal[i][j] << "\n" << endl;
		}
		cout << endl;
	}
    return 0;
}

