// Functions
// Function called square(int) is created to calculate the square of a integer number passed to it

#include <iostream>
using namespace std;

// Function prototype
int square(int); 

int main() {
	// Function call example
	int number = 4;
	cout << "The square of " << number << " is " << square(number); //should return 16
	cout << endl; 
	return EXIT_SUCCESS; 
}

// Function definition
int square(int number) {
	return number * number; 
}