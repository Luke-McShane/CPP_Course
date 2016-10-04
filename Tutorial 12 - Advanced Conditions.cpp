// Tutorial 12 - Advanced Conditions.cpp : Defines the entry point for the console application.
//

#include "stdafx.h";
#include <iostream>;
#include <string>;



using namespace std;

int main() {

	int val1 = 7;
	int val2 = 2;

	cout << "Please enter a number: " << flush;
	int userVal;
	cin >> userVal;

	if (userVal <= val1 && userVal >= val2) {
		cout << "Your input was in the range: 2-7" << endl;
	} else {
		cout << "Your input was <2 or >7" << endl;
	}

	if (userVal == val1 || userVal == val2) {
		cout << "Your input was either 2 or 7" << endl;
	} else {
		cout << "Your input was in the range: 3-6" << endl;
	}

	/*
	We are able to check multiple conditions in 'if' statements; the amount is not limited to just two..
	We can use multiple AND (&&) and OR (||) statements, but this may get confusing so it is more elegant to format it using boolean variables.

	if ((val1 <= 4 && val1 >= 9) || (val2 == 2 || val1 == 8)){
	//do stuff
	}

	Note how difficult this is to read, especially if we did not know the concrete values of the variables (these have been hard-coded, but the values
	could easily have been determined in the program by some function(s)/user input.
	We can make this more elegant by implementing boolean expressions
	*/

	bool condition1 = (val1 <= 4 && val1 >= 9);
	bool condition2 = (val2 == 2 || val1 == 8);

	cout << "Condition 1: " << condition1 << "\nCondition 2: " << condition2 << endl;
	if (condition1 || condition2) {
		cout << "We made it boys!" << endl;
	} else {
		cout << "Well this is awkward.." << endl;
	}

	/*
	In the console we can see that condition1 is 0, meaning it is false, and condition2 is 1, meaning it is true, so the code within the 'if' statement is run.
	Notice how more elegant the code looks using boolean expressions than it would do otherwise. It makes the code easier to interpret.
	*/
	return 0;
}

