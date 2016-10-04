#include "stdafx.h"
#include "Person.h"
#include <string>
#include <iostream>
using namespace std;

Person::Person()
{
	name = "NoName";
}


Person::~Person()
{
}

string Person::getName() {
	return name;
}

void Person::setName(string myName) {
	name = myName;
}