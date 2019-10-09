// While loop: program asks input from the user until the user inputs 0. When the user input is 0, the program sums all the inputs and prints on the screen

#include <iostream>
using namespace std; 

int main() {
	int inputNumber, sum = 0;
	do {
		cout << "Enter a number: ";
		cin >> inputNumber;
		sum += inputNumber;
	} while (inputNumber != 0);
	cout << "The sum of all the input numbers: " << sum << "\n";

	return 0;

}