// Tutorial 29 - Overloading Constructors.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Person.h"
#include <string>
using namespace std;

int main()
{
	Person person1;
	Person person2("Rob", 12);
	Person person3("Kevin");
	cout << endl;
	cout << person1.info() << endl;
	cout << person2.info() << endl;
	cout << person3.info() << endl;
    return 0;
}

