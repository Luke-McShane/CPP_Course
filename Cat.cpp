
#include "stdafx.h"
#include <iostream>
//Here we include the header file so we can build some code for each of the prototype functions
#include "Cat.h"

using namespace std;

//We use the two colons to access different functions within, think back to "std::string::size_type" and how that represents
//accessing the definition size_type that is contained within  the string class, which is contained within the std library.
int Cat::age() {
	cout << "How old is this cat? " << flush;
	int userVal;
	cin >> userVal;
	return userVal;
}

void Cat::speak() {
	cout << "Meow" << endl;
}

void Cat::jump() {
	cout << "I am jumping" << endl;
}


