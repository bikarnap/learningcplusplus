// Calculator

#include <iostream>
#include <math.h>
using namespace std; 

int main() {
	int calculation; 
	int number;
	cout << "Please choose calculation (1=sqare root, 2=logarithm, 3=exp, 4=tan, 5=end program): ";
	cin >> calculation; 
	switch (calculation) {
		if (calculation > 0 && calculation <= 5) {
	case 1:
		cout << "Enter a number to perform chosen calculation: ";
		cin >> number;
		cout << "Square of " << number << ": " << sqrt(number);
		break;

	case 2:
		cout << "Log of " << number << ": " << log(number);
		break;

	case 3:
		cout << "Exponent of " << number << ": " << exp(number);
		break;

	case 4:
		cout << "Tan of " << number << ": " << tan(number);
		break;
	}

	case 5: 
		cout << "You have chosen to end the program. Program exiting...";
		break;

	default:
		cout << "No such calculation available";
		break;
	}

	// Calculation of the value of PI
	double pi = 0.00; // initialiation of the value of PI
	int userInput; 
	cout << "Enter the number of terms to be included to calculate the value of PI: ";
	cin >> userInput;
	double denominator = 1.00;
	for (int i = 1; i <= userInput; i++) {
		if (i % 2 != 0)
			pi += (4.0 / denominator);
		else
			pi -= (4.0 / denominator);
		denominator += 2;
		
	}

	cout << "The value of PI is: " << static_cast<double>(round(pi));
	cout << "\n";
	return EXIT_SUCCESS;
}