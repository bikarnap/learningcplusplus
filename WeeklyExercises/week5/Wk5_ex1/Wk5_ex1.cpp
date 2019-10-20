// While loop: Use of while loop to print  (a) numbers in descending order and (b) even numbers

#include <iostream>
using namespace std;

int main() {
	int counter = 5;
	int evenCheck = 1; // to check if the number is even

	// (a) Prints 5 4 3 2 1 0 -1 -2 -3 -4 -5
	cout << "Output from the first loop\n";
	while (counter > -6) {
		cout << counter << " ";
		counter--;
	}
	cout << "\n\n";
	// (b) printing even numbers between 1 and 50
	cout << "Output from the second loop";
	cout << "\nThe even numbers (1-50) are: ";
	while (evenCheck <= 50) {
		if (evenCheck % 2 == 0) {
			cout << evenCheck << " ";
		}
		evenCheck++;
	}
	cout << "\n";

	return 0;
}