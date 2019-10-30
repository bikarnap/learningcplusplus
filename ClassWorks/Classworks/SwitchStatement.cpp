// Switch Statement exercise

#include <iostream>
using namespace std; 

int main() {
	int day; 
	cout << "Find out what is the name of the day";
	cout << "\nEnter the number of day to find out which day it is(1...7): "; 

	cin >> day; 

	switch (day) {
		case 1: 
			cout << "The day is Monday.\n"; 
			break; 
		case 2:
			cout << "The day is Tuesday.\n";
			break;
		case 3:
			cout << "The day is Wednesday.\n";
			break;
		case 4:
			cout << "The day is Thursday.\n";
			break;
		case 5:
			cout << "The day is Friday.\n";
			break;
		case 6:
			cout << "The day is Saturday.\n";
			break;
		case 7:
			cout << "The day is Sunday.\n";
			break;
		default:
			cout << "You should enter the numbers 1 or 2 or 3 or 4 or 5 or 6 or 7!";
			break; 

	}

	return 0; 
	
}