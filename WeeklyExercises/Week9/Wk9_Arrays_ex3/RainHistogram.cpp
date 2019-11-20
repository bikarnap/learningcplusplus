// Array and histogram

#include <iostream>
using namespace std; 

void printStar(int); // function prototype

int main() {
	const int MONTHS = 12; 
	int monthlyRain[MONTHS];

	for (int i = 0; i < MONTHS; i++) {
		int rainAmount; 
		cout << "Enter the amount of rain for the month #" << (i + 1) << ": ";
		cin >> rainAmount;
		monthlyRain[i] = rainAmount;
	}
	
	cout << endl; 

	for (int i = 0; i < MONTHS; i++) {
		printStar(monthlyRain[i]);
	}

	return EXIT_SUCCESS;
}

void printStar(int amount) {
	for (int i = 0; i < amount; i++) {
		cout << "*";
	}
	cout << endl;
}