// Tutorial 26 - Constructors Destructors.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "Cat.h"
using namespace std;


int main()
{
	//Here we encapsulate the cat, meaning the destructor will run when the enclosing parenthesis is reached as catOne
	//is only present within it's scope.
	//We also pass true as the variable, this sets the happiness to true for this cat object.
	{
		Cat catOne(true);
		catOne.speak();
	}

	//Here we pass false as a variable, setting the happiness to false.
	//The destructor is run after "Program ending.." is output as the enclosing parenthesis are met after this output stream,
	//and this represents the scope of this cat.
	Cat catTwo(false);
	catTwo.speak();

	cout << "Program ending.." << endl;
    return 0;
}

