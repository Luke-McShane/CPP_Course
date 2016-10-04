// Tutorial 25 - Data Members.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "Cat.h"
using namespace std;

int main()
{
	Cat catOne;
	catOne.makeHappy();
	catOne.speak();

	Cat catTwo;
	catTwo.makeSad();
	catTwo.speak();
    return 0;
}

