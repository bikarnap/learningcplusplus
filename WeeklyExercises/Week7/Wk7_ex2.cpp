// Functions
// Function created float rectangular(float, float) to return the area of a rectangle

#include <iostream>
using namespace std;

// Function prototype
float rectangular(float, float);

int main() {
	cout << rectangular(4.7, 5); 

	return 0; 
}

float rectangular(float height, float width) {
	return width * height; 
}