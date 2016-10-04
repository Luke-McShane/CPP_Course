// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h";
#include <iostream>;
#include <string>;

using namespace std;

//"cout" is an object. The "<<" is an insertion operator that "inserts" an operand(s) into the object whose purpose here is to output data to the console.

int main() {

	cout << "Please enter your name: " << flush;

	//">>" is an extraction operator.
	//The operator is followed by the variable where the extracted data is to be stored.
	string userInput;
	cin >> userInput;

	cout << "You entered: " << userInput << "\n" << endl;

	cout << "Please enter a number: " << flush;
	int userValue;
	cin >> userValue;
	cout << "You entered: " << userValue << endl;
	return 0;
}
