
//Application 2 - Outputting text

#include "stdafx.h";
#include <iostream>;

using namespace std;

int main(){
	//"flush" outputs the data from the memory buffer but does NOT create a new line.
	//"cout" shows that whatever is pointed to it will be output.
	//"endl" points to something (in this case our output string") and puts a new line after it.
	//"endl" also flushes the buffer. It outputs any text stored in the buffer.
	//Always put "flush" or "endl" at the end of data you want to be output as it forces the OS to output whatever is stored in the memory buffer.

	cout << "Starting program..." << flush;
	
	cout << "This is some output" << endl;

	cout << "Banana." << " Apple." << " Orange." << endl;

	cout << "This is another output" << endl;
	return 0;
}