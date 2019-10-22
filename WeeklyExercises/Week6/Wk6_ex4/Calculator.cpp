// Calculator

#include <iostream>
#include <tgmath.h>
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

	return EXIT_SUCCESS;
}