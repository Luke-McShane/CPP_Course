// Tutorial 30 - This.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "Person.h"
using namespace std;

int main()
{
	Person person1;
	Person person2("Adam", 17);
	Person person3("Cindy", 46);

	cout << person1.getInfo() << endl;
	cout << person1.getMemLocation() << endl;

	cout << person2.getInfo() << endl;
	cout << person2.getMemLocation() << endl;

	cout << person3.getInfo() << endl;
	cout << person3.getMemLocation() << endl;

	cout << "\n" << "Person1: " << &person1 << endl;
	cout <<"Person2: " << &person2 << endl;
	cout << "Person3: " << &person3 << endl;
    return 0;
}

