// Functions
// Function created float rectangular(float, float) to calculate the area of a rectangle

#include <iostream>
using namespace std; 

// Function prototype
float rectangular(float, float);

int main() {
	float length = 23.56; 
	float width = 12.45; 
	// Example of function call
	cout << "The area of a rectangle with length " << length << " and width " << width << " is "
		<< rectangular(length, width);

	return EXIT_SUCCESS;

}

float rectangular(float length, float width) {
	return length * width; 
}