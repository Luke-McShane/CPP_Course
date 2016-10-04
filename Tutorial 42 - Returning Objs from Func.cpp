// Tutorial 42 - Returning Objs from Func.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

/*
Local variables are stored on the stack, which is much smaller than the heap and has a specified limit.
If too much is stored on the stack, stack overflow occurs and this crashes our program.
To avoid this, it is best practise to instantiate an object on the heap - computer memory - by using the 'new' keyword
as this actually allocates a set amount of memory at a specific address on the heap.
*/

class Person {
private:
	string name;
	int age;
public:
	Person(string name, int age) : name(name), age(age) { cout << "Object created" << endl; }
	Person() : name("Undefined"), age(NULL) { cout << "Object created" << endl; }
	~Person() { cout << "Object deleted" << endl; }
	void setName(string name) { this->name = name; }
	void setAge(int age) { this->age = age; }
	string getName() const { return name; }
	int getAge() const { return age; }
};

//Here we give the return type as a pointer to an object.
//The object is created inside the method and we use the pointer to access the object.
Person *createPerson() {
	Person *person = new Person;
	return person;
}

int main()
{
	Person *person1 = createPerson();
	person1->setName("John");
	person1->setAge(19);
	cout << "Name: " << person1->getName() << " Age: " << person1->getAge() << endl;
	delete person1;
    return 0;
}

