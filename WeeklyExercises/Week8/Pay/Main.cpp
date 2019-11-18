#include <iostream>
#include "Header.h"
using namespace std;

int main() {

	//Function call example
	float workingHours;
	cout << "Enter the working hours: ";
	cin >> workingHours;
	cout << "Earnings for working " << workingHours << " hours is " << pay(workingHours) << " eruos.";
	cout << endl;
	return EXIT_SUCCESS;
}