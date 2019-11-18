// Functions
// Function created float rectangular(float, float) to calculate the area of a rectangle when length
// and height of a rectangle is passed as arguments

#include <iostream>
using namespace std; 

// Function prototype
float rectangular(float, float);

int main() {
	float length = 23.56; 
	float width = 12.45; 
	// Example of function call
	cout << "The area of a rectangle with length " << length << " unit"<< " and width " << width 
		 << " unit" << " is "<< rectangular(length, width) << " square units"; // should return 23.56 * 12.45 = 293.22
	cout << endl;
	return EXIT_SUCCESS;

}

// Function definition
float rectangular(float length, float width) {
	return length * width; 
}