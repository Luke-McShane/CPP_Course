// Tutorual 24 - Classes.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Cat.h"
#include "Dog.h"
using namespace std;

int main()
{
	//Here we create an object of Cat named catOne
	Cat catOne;
	//Here we access different methods from the Cat class
	catOne.jump();
	catOne.speak();
	int catOneAge = catOne.age();

	cout << "Your first cat is " << catOneAge << " years old." << endl;

	Cat catTwo;
	int catTwoAge = catTwo.age();
	cout << "Your second cat is " << catTwoAge << " years old." << endl;


	Dog dogOne;
	dogOne.bark();
	dogOne.rollOver();
	int dogOneAge = dogOne.dogAge();
	cout << "Your first dog is " << dogOneAge << " years old." << endl;

    return 0;
}

