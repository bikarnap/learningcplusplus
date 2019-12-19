#include <iostream>
#include "PrintLine.h"
using namespace std; 

// Function to display Welcome message and the information about the prize
void DisplayWelcome() {
	for (int i = 0; i < 201; i++) {
		if (i == 100)
			cout << "\n\tWelcome to this Lottery Game\n";
		else
			cout << "*";
	}
	cout << endl << endl;
	cout << "Player can choose 7 main lottery numbers and 3 bonus lottery numbers.\n";
	cout << "Prize money is as follows:\n"
		<< " - all 7 main numbers matched = Jackpot (this amount varies every time)\n"
		<< " - 6 main numbers matched + at least one bonus number matched = 50000 euros\n"
		<< " - 6 main numbers matched = 40000 euros\n"
		<< " - 5 main numbers matched + at least one bonus number matched = 35000 euros\n"
		<< " - 5 main numbers matched = 25000 euros\n"
		<< " - 4 main numbers matched = 10000 euros\n"
		<< " - 3 main numbers matched = 500 euros\n"
		<< " - 2 main numbers matched = 25 euros";
	PrintLine();
}