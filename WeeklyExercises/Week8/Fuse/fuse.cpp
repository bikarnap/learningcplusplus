#include <iostream>
#include "Header.h"
using namespace std; 

void fuse(int power) {
	const int VOLTAGE = 220; // 220 volts
	int current = power / VOLTAGE;
	cout << "The current is " << current << " A.\n";
	if (current > 0) {
		if (current < 10) {
			cout << "You should use a fuse of 10A.";
		}
		else if (current < 16) {
			cout << "You should use a fuse of 16A.";
		}
		else if (current < 20) {
			cout << "You should use a fuse of 20A.";
		}
		else {
			cout << "You should use multiple fuses.";
		}
	}
	else {
		cout << "Something seems to be wrong with the power consumption.";
	}
	
	cout << endl;
	return EXIT_SUCCESS;

}