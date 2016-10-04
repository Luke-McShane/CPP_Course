// Tutorial 43 - Allocating Memory.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;

class Letter {
private:
	char value;
public:
	Letter() : value(NULL) { cout << "Object created" << endl; }
	Letter(const Letter& other) : value(other.value) { cout << "Object created by copying" << endl; }
	~Letter() { cout << "Object deleted" << endl; }
	void setValue(char value) { this->value = value; }
	char getValue() const { return value; }
};

int main()
{
	Letter *letter = new Letter[26];
	string *name = new string;
	char *currentVal = new char('a');
	for (int i = 0; i < 26; i++) {
		letter[i].setValue(*currentVal);
		(*currentVal)++;
		*name += letter[i].getValue();
	}
	cout << *name << endl;
	delete [] letter;
	delete  currentVal;
	delete name;
    return 0;
}

