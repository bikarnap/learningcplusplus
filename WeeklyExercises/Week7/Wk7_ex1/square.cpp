// Functions
// Function called square(int) is created to calculate the square of a integer

#include <iostream>
using namespace std;

// Function prototype
int square(int); 

int main() {
	// Function call example
	int number = 4;
	cout << "The square of " << number << " is " << square(number);

	return EXIT_SUCCESS; 
}

int square(int number) {
	return number * number; 
}