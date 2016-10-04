#include "stdafx.h"
#include <iostream>
#include "Dog.h"
using namespace std;

void Dog::bark() {
	cout << "WOOF WOOF MOTHERFUCKER" << endl;
}

void Dog::rollOver() {
	cout << "*Dog is rolling *" << endl;
}

int Dog::dogAge() {
	cout << "How old is this dog? " << flush;
	int userValue;
	cin >> userValue;
	return userValue;
}