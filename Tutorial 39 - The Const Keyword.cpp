// Tutorial 39 - The Const Keyword.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;

class Person {
private:
	string name;

public:
	void setName(string name) { this->name = name; }
	//The 'const' keyword used for a method means that no altering of variables is able to take place within this method.
	//For example, stating 'name = "Bob"' would induce an error as this would mean the method is no longer constant.
	void printName() const { cout << "My name is: " << name << endl; }
};

int main()
{
	Person person;
	person.setName("Charlie");
	person.printName();

	int value = 10;
	int value2 = 14;

	//Here we simply declare a pointer that points to 'value'.
	int * pValue = &value;
	cout << *pValue << endl;

	//Here we are just altering where pValue points to, in this case it now points to 'value2' instead of value.
	pValue = &value2;
	cout << *pValue << endl;

	//Here we change the value stored at the memory location 'pValue' points to.
	*pValue = 16;
	cout << value2 << endl;

	//int * const pValue
	//If we had this, then the pointer would be constant and we would be unable to change where pValue points to.

	//const int * pValue
	//Here we declare a constant int, so dereferencing pValue and changing the value would cause an error.

	//const int * const pValue
	//Here we are stating that both the pointer and type are constant, so we are unable to change both where the pointer points to, and the value of what it's pointing to.
    return 0;
}

