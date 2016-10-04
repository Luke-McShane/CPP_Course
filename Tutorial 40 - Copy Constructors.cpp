// Tutorial 40 - Copy Constructors.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;

class Person {
private:
	string name;
	int age;

public:
	//Here we declare a basic constructor that sets the member-variables using a member-initialization list.
	Person(string name, int age) : name(name), age(age) { cout << "Person object created" << endl; }

	//Here we create the copy constructor.
	//We pass through a reference to the object being copied, make it constant, and name it 'other'.
	//We set the member variables of this new. copied object by accessing the member variables of the referenced object. We can do this as, although private, are of the same class.
	//Note that because the referred object is declared constant, we cannot call any non-constant methods. So calling setVar would cause an error.
	Person(const Person& other): name(other.name), age(other.age) { cout << "Person object created through copying" << endl; }
	void speak() const { cout << "My name is " << name << " and I am " << age << " years old." << endl; }
	void setVar(string name, int age) { this->name = name; this->age = age; }
};

int main()
{
	Person person1("Bill", 15);
	person1.speak();
	//Here we create a copy of person1 by calling the equals operator that calls person1.
	Person person2 = person1;
	person2.speak();
	//Here we create a copy of person1 by passing it through as an argument in person3.
	//The compiler recognizes this as a copy since it's data-type/argument list matches the copy constructor's argument list.
	Person person3(person1);

    return 0;
}

