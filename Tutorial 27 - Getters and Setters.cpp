// Tutorial 27 - Getters and Setters.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "Person.h"
using namespace std;

int main()
{
	Person person1;
	cout << "My name is: " << person1.getName() << endl;
	person1.setName("John");
	cout << "My name is now: " << person1.getName() << endl;
    return 0;
}

