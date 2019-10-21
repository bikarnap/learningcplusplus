// Use of for-loop

#include <iostream>
using namespace std; 

int main() {
	const int MAX1 = 10; 
	const int MAX2 = 20;

	// Prints 1 2 3 4 5 6 7 8 9 10
	cout << "(a) First loop output:\n";
	for (int i = 1; i <= MAX1; i++) {
		cout << i << " "; 
	}
	
	// Prints 2, 4, 6, 8, 10, 12, 14, 16, 18, 20
	cout << "\n\n(b) Second Loop output:\n";
	for (int i = 2; i <= MAX2; i += 2) {
		cout << i << ", ";
	}
	cout << "\n";

	return EXIT_SUCCESS;
}