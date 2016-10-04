// Tutorial 41 - The New Keyword.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

class Person {
private:
	string name;

public:
	Person(){ cout << "Object created" << endl; }
	Person(const Person& other)  { cout << "Object created through copying" << endl; }

	void setName(string name) { this->name = name; }
	void speak() const { cout << "My name is " << name << endl; }

	~Person() { cout << "Object destroyed" << endl; }
};

int main()
{
	Person person1;
	person1.setName("Bill");

	Person *person2 = new Person;
	//Now, we could access person2's methods by dereferencing the pointer then accessing them with a '.' like so:
	(*person2).setName("Fred");
	(*person2).speak();

	//It is however much more elegant to use this way of accessing methods as it saves us dereferencing.
	//Notice how this is this same as how we use 'this'.
	person2->setName("Bob");
	person2->speak();

	//When instantiate an object like this: 'Person person1', it is automatically destroyed when it is out of scope.
	//However, when using the 'new' keyword, we must 'delete' the object in order to de-allocate the memory or else we get memory leaks.
	delete person2;
    return 0;
}

