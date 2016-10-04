// Tutorial 3 - Variables.cpp : Defines the entry point for the console application.
//

#include "stdafx.h";
#include <iostream>;

using namespace std;

int totalAnimals(int dogs, int cats) {
	return dogs + cats;
}

int main() {

	//"int" is a keyword that tells the compiler that some memory space must be allocated to store an integer.
	//The variable name "numberCats" is used to refer to this memory space. It is a memory-label.
	//"= 5" puts the integer 5 in that memory space.
	int numberCats = 5;
	int numberDogs = 23;
	//This statements takes the data from the memory locations labelled "numberDogs" and "numberCats", passes them
	//through a function that adds the data together, then stores the result in a new memory location labelled "numberAnimals"
	int numberAnimals = totalAnimals(numberDogs, numberCats) ;

	cout << "Number of cats: " << numberCats << endl;
	cout << "Number of dogs: " << numberDogs << endl;
	cout << "Total number of animals: " << numberAnimals << endl;

	cout << "New dog acquired" << endl;
	numberDogs += 1;
	cout << "New dog total: " << numberDogs << endl;

	return 0;
}


