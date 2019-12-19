/*
// Function SelectNumbers performs the action of taking user input as integer numbers and saves the numbers
// in an array and finally return the array of user inputted numbers.
//
// Coded by: Bikarna Pokharel
*/

#include <iostream>
using namespace std;

int* SelectNumbers(int userChoices, int min, int max) {
	int number;
	int* choices = new int[userChoices];
	cout << "Enter " << userChoices << " unique numbers you want to make selection (min= " << min << ", max= " << max << ")\n";
	for (int i = 0; i < userChoices; i++) {
		cout << ">> ";
		while (!(cin >> number)) {
			cout << "Please enter an integer between 1 and 39 inclusive\n";
			cin.clear();
			cin.ignore();
		}
		choices[i] = number;
	}

	return choices;
}