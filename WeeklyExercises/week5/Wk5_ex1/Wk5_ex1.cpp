// While loop: Use of while loop to print  (a) numbers in descending order and (b) even numbers

#include <iostream>
using namespace std;

int main() {
	int counter = 5;
	int evenCheck = 1;
	//int evenNumbers = 0;

	// (a) Prints 5 4 3 2 1 0 -1 -2 -3 -4 -5
	while (counter > -6) {
		cout << counter << " ";
		counter--;
	}

	// (b) printing even numbers between 1 and 50
	cout << "\nThe even numbers (1-50) are: ";
	while (evenCheck <= 50) {
		if (evenCheck % 2 == 0) {
			cout << evenCheck << " ";
			//evenNumbers++; 
		}
		evenCheck++;
	}
	cout << "\n";
	//cout << "\nThe total number of even numbers in the range of 1-50 inclusive is " << evenNumbers << "\n";

	return 0;
}